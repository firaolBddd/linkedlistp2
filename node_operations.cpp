#include "node.h"
// Implementation of Node class functions
Node::Node(Student* studentvalue)
{
    value = studentvalue;
    next = nullptr;
}
Node::~Node()
{
    next = nullptr;
}
Student* Node::getStudent()
{
    return value;
}
void Node::setNext(Node* newnext)
{
    next = newnext;
}
Node* Node::getNext()
{
    return next;
}



