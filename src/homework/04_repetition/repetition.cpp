//add include statements
#include"repetition.h"
//add function(s) code here
double get_gc_content(const std::string &DNA){
    double count = 0;
    for(auto ch: DNA){
        if(ch == 'C'||ch == 'G'){
            count++;
        }
    }
    count /= DNA.length();
    return count;
}
