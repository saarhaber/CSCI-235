/**
Name: Saar Haber
Course: CS 235
Assingment: Project 1A
An abstraction for a person in this course.
A CourseMember will always have a first name, last name and ID.
All we can do with a CourseMember, for now, is retrieve that information.
Date: 1/29/19
*/

#include <string>
#include "CourseMember.hpp"



CourseMember::CourseMember() {
}

/** constructor */
CourseMember::CourseMember(int id, std::string first, std::string last) {
  id_ = id;
  first_name_ = first;
  last_name_ = last;
}


/** @return returns id_; */
int CourseMember::getID() const {
  return id_;
}

/** @return returns first_name_ */
std::string CourseMember::getFirstName() const {
  return first_name_;
}

/** @return returns last_name_ */
std::string CourseMember::getLastName() const {
  return last_name_;
}
