 // student cpp file for creating the function form the header file which will take 
// function for the main.cpp 

#include "Student.h"
Student::Student() : studentID(0), GPA(0.0) {}
Student::Student(std::string firstName, std::string lastName, int studentID, double GPA)
    : firstName(firstName), lastName(lastName), studentID(studentID), GPA(GPA) {}
Student::~Student() {
    // Destructor, no dynamic memory allocated in this class
}
std::string Student::getFirstName() const {
    return firstName;
}
std::string Student::getLastName() const {
    return lastName;
}
int Student::getStudentID() const {
    return studentID;
}
double Student::getGPA() const {
    return GPA;
}


