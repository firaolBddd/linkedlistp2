 // node .cpp from peers 
//Node class: each node holds a student and next student (links to the next student)
#include "node.h"
#ifndef STUDENT_H
#define STUDENT_H

Node::Node(Student* studentvalue)
{
	value = studentvalue;
	next = NULL;
}

Node::~Node()
{
	next = NULL;
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
#endif
