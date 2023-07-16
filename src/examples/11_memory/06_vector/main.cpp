#include "my_vector.h"
#include <iostream>
using std::cout;
int main()
{
    cout<<"Creating Vector v on the stack";
    Vector v(3);
    cout<<"Deleting Vector v on the stack";
    
    return 0;
}

