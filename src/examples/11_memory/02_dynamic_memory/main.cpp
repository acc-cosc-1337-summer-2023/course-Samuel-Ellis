#include <iostream>
#include <memory>

using std::unique_ptr; using std::make_unique;
using std::cout;

int main() 
{	
	/*//Manual non automatic
	//1- create memory
	//2- use memory
	//3- free or delete memory from the heap/free store
	int* int_ptr = new int(10); //creates memory on the heap dynamically
	cout<<*int_ptr<<"\n";
	delete int_ptr;*/

	//Smart pointers(automatic)
	unique_ptr<int> num = make_unique<int>(25);
	cout<<*num<<"\n";


	return 0;
}