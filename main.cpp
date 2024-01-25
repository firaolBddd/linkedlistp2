// This us main cpp for the code
//Firaol Berehanu
//Galbriths class
// i must build a linked list using a students code as the node.h and nodoe.cpp
//
#include <iostream>
#include "Node.h"
#include "Student.h"
#include <iomanip> // Add this line for setprecision
using namespace std;
// Function prototypes
void addStudent(Node*& head);
void printStudents(Node* head);
void deleteStudent(Node*& head);
void calculateAverage(Node* head);
void destroyList(Node*& head);
int main() {
    Node* head = nullptr;
    string command;
    do {
        cout << "Enter command (ADD, PRINT, DELETE, AVERAGE, QUIT): ";
        cin >> command;
        if (command == "ADD") {
            addStudent(head);
        } else if (command == "PRINT") {
            printStudents(head);
        } else if (command == "DELETE") {
            deleteStudent(head);
        } else if (command == "AVERAGE") {
            calculateAverage(head);
        } else if (command != "QUIT") {
            cout << "Invalid command. Try again." << endl;
        }
    } while (command != "QUIT");
    // Clean up memory before exiting
    destroyList(head);
    return 0;
}
// Function to add a new student to the linked list
void addStudent(Node*& head) {
    // Sample implementation, replace with your logic
    string firstName, lastName;
    int studentID;
    double GPA;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter student ID: ";
    cin >> studentID;
    cout << "Enter GPA: ";
    cin >> GPA;

    // Create a new student
    Student* newStudent = new Student(firstName, lastName, studentID, GPA);
    // Add the student to the linked list
    Node* newNode = new Node(newStudent);
    newNode->setNext(head);
    head = newNode;
    cout << "Student added successfully." << endl;
// Function to print all students in the linked list
void printStudents(Node* head) {
    // Sample implementation, replace with your logic
    if (head == nullptr) {
        cout << "No students in the list." << endl;
        return;
    }
    cout << "List of students:" << endl;
    // Traverse the linked list and print each student
    Node* current = head;
    while (current != nullptr) {
        Student* currentStudent = current->getStudent();
        cout << currentStudent->getFirstName() << " "
             << currentStudent->getLastName() << ", "
             << currentStudent->getStudentID() << ", "
             << fixed << setprecision(2) << currentStudent->getGPA() << endl;
        current = current->getNext();
    }
}
// Function to delete a student from the linked list
void deleteStudent(Node*& head) {
    // Sample implementation, replace with your logic
    if (head == nullptr) {
        cout << "No students in the list." << endl;
        return;
    }
    int studentID;
    cout << "Enter the student ID to delete: ";
    cin >> studentID;
    Node* current = head;
    Node* previous = nullptr;
    // Traverse the list to find the node with the specified student ID
    while (current != nullptr && current->getStudent()->getStudentID() != studentID) {
        previous = current;
        current = current->getNext();
    }
    // If the student is found, delete the node
    if (current != nullptr) {
        if (previous == nullptr) {
            // If the node to delete is the head
            head = current->getNext();
        } else {
            // If the node to delete is not the head
            previous->setNext(current->getNext());
        }
        delete current->getStudent();
        delete current;
        cout << "Student with ID " << studentID << " deleted successfully." << endl;
    } else {
        cout << "Student with ID " << studentID << " not found." << endl;
    }
}
// Function to calculate and print the average GPA of all students
void calculateAverage(Node* head) {
    // Sample implementation, replace with your logic
    if (head == nullptr) {
        cout << "No students in the list." << endl;
        return;
 }
    double totalGPA = 0.0;
    int studentCount = 0;
    // Traverse the linked list to calculate the total GPA and count of students
    Node* current = head;
    while (current != nullptr) {
        totalGPA += current->getStudent()->getGPA();
        studentCount++;
        current = current->getNext();
    }
    // Calculate the average GPA
    double averageGPA = totalGPA / studentCount;
    cout << "Average GPA of all students: " << fixed << setprecision(2) << averageGPA << endl;
}
// Function to destroy the entire linked list and free memory
void destroyList(Node*& head) {
    // Sample implementation, replace with your logic
    Node* current = head;
    Node* next;
    while (current != nullptr) {
        next = current->getNext();
        delete current->getStudent();
        delete current;
        current = next;
    }
    head = nullptr; // Set head to null after destroying the list
    cout << "Linked list destroyed and memory freed." << endl;
}


