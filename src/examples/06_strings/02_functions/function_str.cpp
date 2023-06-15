#include "function_str.h"

using std::string;

void string_value_param(string str){
    str = "Python";
}

void string_referance_param(string &str){
    str = "Python";
}

void string_const_referance_param(const std::string &str){
    //str = "Java"; can't modify const referance
}