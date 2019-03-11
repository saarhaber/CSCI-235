/**
Name: Saar Haber
Course: CS 235
Assingment: Project 1B + 2C
Instructor.cpp
*/
#include <string>
#include "Instructor.hpp"
#include <iostream>

//constructor
Instructor::Instructor(int id, std::string first, std::string last)
:CourseMember(id, first, last)
 {
  int id_ = id;
  std::string first_ = first;
  std::string last_ = last;
}

//********** Accessor Methods ****************

/** @return returns office_; */
std::string Instructor::getOffice() const {
  return office_;
}

/** @return returns contact__ */
std::string Instructor::getContact() const{
  return contact_;
}

/** sets Office_ */
void Instructor::setOffice(const std::string office) {
  office_ = office;
}

/** sets contact_ */
void Instructor::setContact(const std::string contact){
  contact_ = contact;
}

void Instructor::displayMember(){
    std::cout << first_name_ << " " << last_name_ <<
    " - office: 1000C, email: 235Instructors@hunter.cuny.edu"; 
  }
