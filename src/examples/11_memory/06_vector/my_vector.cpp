#include "my_vector.h"
#include <iostream>
using std::cout;
/*
constructor
1. Initilize the size
2. initilisze the capacity with size
3. create dynamic memory of size value
*/

Vector::Vector(int size) :
    elements{new int[size]}{
        cout<<"Memory created at address: "<<elements<<"\n";
        capacity = size;
    }

Vector::~Vector(){
    cout<<"Deleting memory at address: "<<elements<<"\n";
    delete []elements;
}