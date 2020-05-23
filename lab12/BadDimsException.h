#pragma once
#include <iostream>
#include <string>
#include <string.h>



class BadDimsException: public std::exception{

public:
    BadDimsException(int old_i, int old_j, int new_i, int new_j):_old_i(old_i),_old_j(old_j),_new_i(new_i),_new_j(new_j){
        s="dimensions "+std::to_string(_new_i)+
        " and "+std::to_string(_new_j)+" do not conform with "+std::to_string(_old_i)+" and "+std::to_string(_old_j);
    }
    const char* what() const throw(){
        
        const char* x= s.c_str();
        return x;
    }
    
private:
    int _old_i;
    int _old_j;
    int _new_i;
    int _new_j;
    std::string s;
};