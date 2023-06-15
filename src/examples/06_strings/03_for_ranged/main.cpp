#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    string lang = "Python";
    for(auto ch: lang){
        cout<<ch<<"\n";
    }
    return 0;
}