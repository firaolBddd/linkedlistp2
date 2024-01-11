// student. h files for headers
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
class Student {
public:
    Student();
    Student(std::string firstName, std::string lastName, int studentID, double GPA);
    ~Student();
    // Getter functions
    std::string getFirstName() const;
    std::string getLastName() const;
    int getStudentID() const;
    double getGPA() const;
private:
    std::string firstName;
    std::string lastName;
    int studentID;
    double GPA;
};
#endif // STUDENT_H

