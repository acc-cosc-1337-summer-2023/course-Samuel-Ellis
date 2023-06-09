//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cin;
using std::cout;

int main()
{
	int num;
	int num1 = 4;
	cout<<"Enter a number you would like to multiply by 5: ";
	cin>>num;
	int result = multiply_numbers(num);
	cout<<"The result of "<<num<<" * 5 is: "<<result<<"\n";
	result = multiply_numbers(num1);
	cout<<"The result of 4 * 5 is: "<<result<<"\n";

	return 0;
}
