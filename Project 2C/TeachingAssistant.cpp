/**
Name: Saar Haber
Course: CS 235
Assingment: Project 1B
TeachingAssistant.cpp
*/
#include <string>
#include "TeachingAssistant.hpp"


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
