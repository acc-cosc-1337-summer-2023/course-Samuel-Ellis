#include "arrays.h"
#include<iostream>
using std::cout;
int main()
{
    const int SIZE = 5;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	array_list.Add(5);
	array_list.Add(7);
	array_list.Add(10);
	array_list.Add(15);
	array_list.Add(20);
	array_list.Delete(5);
	cout<<array_list.Get_Value_At_Index(0)<<"\n";
	cout<<array_list.Get_Value_At_Index(1)<<"\n";
	cout<<array_list.Get_Value_At_Index(2)<<"\n";
	cout<<array_list.Get_Value_At_Index(3)<<"\n";
	cout<<array_list.Get_Value_At_Index(4)<<"\n";
    return 0;
}