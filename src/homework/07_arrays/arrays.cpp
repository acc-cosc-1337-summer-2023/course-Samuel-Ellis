//add function(s) code here
#include "arrays.h"

ArrayList::ArrayList(int* array_list, int capacity) :
    elements(array_list)
{
    this->capacity = capacity;
}

void ArrayList::Add(int value)
{
    if(current_index < capacity)
    {
        elements[current_index] = value;
        current_index++;
    }
}

int ArrayList::Get_First_Index_Of(int value)
{
    auto index = -1;
    auto local_current_index = 0;
    
    while(local_current_index < current_index)
    {
        if(elements[local_current_index] == value)
        {
            index = local_current_index;
            break;
        }

        local_current_index++;
    }

    return index;
}

int ArrayList::Get_Value_At_Index(int index)
{
    int value = -1;

    if(index >= 0 && index < current_index)
    {
        value = elements[index];
    }

    return value;
}

void ArrayList::Delete(int value)
{
    auto index = Get_First_Index_Of(value);

    if(index != -1)
    {
        AdjustElements(index);
    }
}

void ArrayList::AdjustElements(int index)
{
    for(auto i = index; i < capacity-1; i++){
        elements[i] = elements[i+1];
    }
    elements[capacity-1] = 0;
    current_index -= 1;
} 