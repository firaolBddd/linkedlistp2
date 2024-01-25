// the node h is from the student also 
//Header file for Node class
#include "Student.h"

using namespace std;

class Node
{
	public:
		Node(Student*); //Constructor
		~Node(); //Destructor
		Student* getStudent(); //Get Student pointer
		void setNext(Node*); //Set the next pointer to the corresponding node pointer
		Node* getNext(); //Get next Node pointer
	protected:
		Student* value;
		Node* next;
};
