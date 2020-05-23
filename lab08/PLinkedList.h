#pragma once
#include "Nodes.h"


class PLinkedList{
    public:
    ~PLinkedList();
    PLinkedList():Head(NULL){};
    PLinkedList(const PLinkedList& p);
    PLinkedList(PLinkedList&& p);
    PLinkedList& operator=(PLinkedList&& p);
    void CopyList(Node* a);
    Node* head();
    PLinkedList& addFront(Node* a);
    Node *Head;
    
    
    
};

std::ostream& operator<<(std::ostream& o,const PLinkedList& lista );