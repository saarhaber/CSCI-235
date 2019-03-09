/**
Name: Saar Haber
Course: CS 235
Assingment: Project 1B
Instructor.cpp
*/
#include <string>
#include "Instructor.hpp"

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
