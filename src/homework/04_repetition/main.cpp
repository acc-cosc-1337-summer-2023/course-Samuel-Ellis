//write include statements
#include "repetition.h"
//write using statements

using std::cout; using std::cin; using std::string;

int main() 
{
	double results;
	string DNA;
	cout<<"Please enter the DNA string, or if you wish to close the loop enter y or Y: ";
	cin>>DNA;
	while(DNA!="y"||DNA!="Y"){
		results = get_gc_content(DNA)*100;
		cout<<"The GC content of the DNA string, "<<DNA<<" is: "<<results<<"%\n";
		cout<<"Please enter the next DNA string, or if you wish to close the loop enter y or Y: ";
		cin>>DNA;
	}
	return 0;
}
