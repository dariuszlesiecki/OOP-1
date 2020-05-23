#pragma once
#include <iostream>
#include <string>

class Node{
    public:
    Node():next(NULL){};
    virtual ~Node()=default;
    virtual void print() const=0;
    virtual Node* copy()=0;
    virtual Node* get_next()=0;
    virtual void set_next(Node *n)=0;
    Node *next;
};

class NodeInt: public Node{
    public:
    NodeInt(int x): _x(x),next(NULL){};
    
    void print() const;
    virtual NodeInt* copy();
    Node* get_next();
    void set_next(Node* n);

    private:
    int _x;
    Node *next;
};

class NodeString: public Node{
    public:
    NodeString(std::string s): _s(s),next(NULL){};

    void print() const;
    virtual NodeString* copy();
    Node* get_next();
    void set_next(Node* n);

    private:
    std::string _s;
    Node *next;
};