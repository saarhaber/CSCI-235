/**
Name: Saar Haber
Course: CS 235
Assingment: Project 1B
Student.cpp
*/
#include <string>
#include "Student.hpp"
#include <iostream>

//constructor
Student::Student(int id, std::string first, std::string last)
:CourseMember(id, first, last)
 {
  // int id_ = id;
  // std::string first_ = first;
  // std::string last_ = last;

}

/** @return returns major_; */
std::string Student::getMajor() const {
return major_;
}

/** @return returns gpa_ */
double Student::getGpa() const {
return gpa_;
}

/** sets major_ */
void Student::setMajor(const std::string major) {
major_ = major;
}

/** sets gpa_ */
void Student::setGpa(const double gpa) {
gpa_ = gpa;
}

void Student::displayMember(){
  std::cout << first_name_ << " " << last_name_ << " majors in " <<
  getMajor() << " with gpa: " << getGpa();
}
