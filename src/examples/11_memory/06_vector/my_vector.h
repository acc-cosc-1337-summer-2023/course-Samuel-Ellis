//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector{
    public:
        Vector(int size); // constructor
        int Size(){return size;}
        int Capacity(){return capacity;}
        ~Vector(); // destructor

    private:
        int size{0}; // current size of list and current index
        int capacity; //total elements the list can hold
        int* elements; // pointer to a list on the heap/free store
};

#endif