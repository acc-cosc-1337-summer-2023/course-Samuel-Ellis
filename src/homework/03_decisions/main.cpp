//write include statements
#include "decisions.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	int num_grade;
	string letter_grade;
	cout<<"Input a numerical grade in the range 0-100 to be converted to its letter counterpart: ";
	cin>>num_grade;
	letter_grade = get_letter_grade_using_switch(num_grade);
	cout<<"The letter counterpart to the input is "<<letter_grade<<"\n";
	return 0;
}