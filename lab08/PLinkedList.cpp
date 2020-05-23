#include "PLinkedList.h"

PLinkedList::~PLinkedList(){
    delete Head;
}

Node* PLinkedList::head(){
    return Head;
}

PLinkedList& PLinkedList::addFront(Node *a){
    Node *tmp=a->copy();
    
    if(Head==NULL){
        Head=tmp;
    }
    else{
        tmp->set_next(Head);
        Head=tmp;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o,const PLinkedList& lista){
    Node *tmp;
    tmp=lista.Head;
    
    while(tmp){
        tmp->print();
        if(tmp->get_next()!=NULL)std::cout<<" -> ";
        tmp=tmp->get_next();
    }
    
    return o;
}

void PLinkedList::CopyList(Node* a){
    if(a==NULL) return;
    

}
PLinkedList::PLinkedList(const PLinkedList& p){
    
    std::cout<< "--- copying list: " << p << std::endl;
    Head=p.Head->copy();
    if(Head==NULL) return;
    
    Node* tmp= Head;
    Node* tmp2= p.Head->get_next();
    while(tmp2){
        tmp->set_next(tmp2->copy());
        tmp=tmp->get_next();
        tmp2=tmp2->get_next();
    }
}
PLinkedList::PLinkedList(PLinkedList&& p){
    std::cout<< "--- moving list: "<< p << std::endl;
    Head=p.Head;
    p.Head=NULL;
}
PLinkedList& PLinkedList::operator=(PLinkedList&& p){
    std::cout<< "--- moving list: "<< p << std::endl;
    delete Head;
    Head= p.Head;
    p.Head=NULL;
    return *this;
}