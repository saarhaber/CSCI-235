/**
Name: Saar Haber
Course: CS 235
Assingment: Project 1B + 2C
TeachingAssistant.cpp
*/
#include <string>
#include "TeachingAssistant.hpp"
#include <iostream>


//condtructor
TeachingAssistant::TeachingAssistant(int id, std::string first, std::string last)
:Student(id, first, last)
{
  int id_ = id;
  std::string first_ = first;
  std::string last_ = last;
}

/** gets hours_per_week_ */
int TeachingAssistant::getHours() const {
  return hours_per_week_;
}

/** get role_ */
ta_role TeachingAssistant::getRole() const{
  return role_;
}

/** sets hours_per_week_ */
void TeachingAssistant::setHours(const int hours) {
  hours_per_week_ = hours;
}

/** sets role_ */
void TeachingAssistant::setRole(const ta_role role) {
  role_ = role;
}

void TeachingAssistant::displayMember(){
  if (hours_per_week_ < 8)
  {
    std::cout << first_name_ << " " << last_name_ << " majors in " <<
    major_ << " with gpa: " << gpa_ << " working part-time as a ";
  }
  else
  {
    std::cout << first_name_ << " " << last_name_ << " majors in " <<
    major_ << " with gpa: " << gpa_ << " working full-time as a ";
  }

  //taking care of role_ and turning it from enum to string
  //strings must be capitalized
  if (role_ == 0) {
    std::cout << "LAB_ASSISTANT";
  }
  else if (role_ == 1) {
    std::cout << "LECTURE_ASSISTANT";
  }
  else {
    std::cout << "FULL_ASSISTANT";
  }
}
