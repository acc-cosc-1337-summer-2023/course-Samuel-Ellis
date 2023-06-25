#include "func.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	vector<int> list1 = {5, 7, -1, 99, -100, 10};
	vector<int> list2 = {6, 1, 8, 9, 4};
	int check;
	cout<<"Select a menu option:\n1 - Get max value\n2 - Get square of elements\n3 - Exit\n";
	cin>>check;
	do
	{	
		switch(check){
			case 1:
				cout<<get_vector_max_value(list1)<<"\n";
				break;
			case 2:
				for(auto i: get_square_of_each_element(list2)){
					cout<<i<<" ";
				}
				cout<<"\n";
				break;
			case 3:
				cout<<"Exiting\n";
				break;
			default: 
				cout<<"Not an option on the list\n";
				break;
		}
		cout<<"Select a menu option:\n1 - Get max value\n2 - Get square of elements\n3 - Exit\n";
		cin>>check;
	} while (check!=3);


	return 0;
}
