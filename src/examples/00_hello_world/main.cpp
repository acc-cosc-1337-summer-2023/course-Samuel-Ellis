#include<iostream>
using std::cout;
int main()
{
    int x = 7;
    int* ptr = &x;
    cout<<*ptr<<"\n";
    cout<<&x<<"\n";
    cout<<&ptr<<"\n";
}