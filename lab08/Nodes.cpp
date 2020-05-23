#include "Nodes.h"

void NodeInt::print() const{
    std::cout<< _x;
}

void NodeString::print() const{
    std::cout<< _s;
}

NodeInt* NodeInt::copy(){
    
    return new NodeInt(_x);
}
NodeString* NodeString::copy(){
    return new NodeString(_s);
}
Node* NodeInt::get_next(){
    return next;
}
Node* NodeString::get_next(){
    return next;
}
void NodeInt::set_next(Node* n){
    next=n;
}
void NodeString::set_next(Node* n){
    next=n;
}


