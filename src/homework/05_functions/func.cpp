//add include statements
#include "func.h"

//add function code here

int get_vector_max_value(vector<int> list){
    int max = list[0];
    for(auto i: list){
        if(max<i){
            max = i;
        }
    }
    return max;
}

vector<int> get_square_of_each_element(vector<int> list){
    vector<int> squared;
    for(auto i: list){
        squared.push_back(i*i);
    }
    return squared;
}