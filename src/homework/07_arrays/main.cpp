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
    return 0;
}