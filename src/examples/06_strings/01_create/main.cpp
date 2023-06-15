#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    
    /*//Heap memory transfer example -- how strings are stored in memory
    //Transfering Strings to another heap to accomidate the increased space requirement
    string lang = "C++";
    
    cout<<lang<<"\n";
    cout<<"Memory address of lang: "<<&lang<<"\n";
    cout<<"Memory address of C in C++: "<<static_cast<void*>(&lang[0])<<"\n";
    cout<<"Memory address of C in C++: "<<static_cast<void*>(&lang[1])<<"\n";
    cout<<"Memory address of C in C++: "<<static_cast<void*>(&lang[2])<<"\n";
    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";
    lang.append(" ");
    lang.append("i");
    lang.append("s");
    lang.append(" ");
    lang.append("a");
    lang.append(" ");
    lang.append("b");
    lang.append("e");
    lang.append("a");
    lang.append("s");
    lang.append("t");
    lang.append("!");

    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";

    lang.append("!");

    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";*/

    string s0("Initial string");
    cout<<s0<<"\n";

    string s1(s0);
    cout<<s1<<"\n";

    string s2(s0, 8, 3);
    cout<<s2<<"\n";

    string s3("Another character sequence", 12);
    cout<<s3<<"\n";

    string s4(10, 'x');
    cout<<s4<<"\n";

    string s5(10, 65);
    cout<<s5<<"\n";

    string s6("123456abc**(**)");
    cout<<s6<<"\n";

    cout<<s0 + s1<<"\n";
    return 0;
}