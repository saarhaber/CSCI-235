/**
Name: Saar Haber
Course: CS 235
Assingment: Project 1A + 2B + 2C
An abstraction for a person in this course.
A CourseMember will always have a first name, last name and ID.
All we can do with a CourseMember, for now, is retrieve that information.

*/

#include <string>
#include <cstdlib>
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

bool operator==(const CourseMember& left, const CourseMember& right) {
  return left.id_ == right.id_ && left.first_name_ == right.first_name_ && left.last_name_ == right.last_name_;
}

/**compares first two letters of lastname to determine relationship
@param lhs rhs the two CourseMember objects to be compared
@return true if lhs.last_name_ and rhs.last_name start with same character
and <= holds for second character
//e.g. Alemani <= Laranga <= Limoni <= Ligorio <= Zion
// where Limoni <= Ligorio (==) and Laranga <= Ligorio (<)
 */
bool operator<=(const CourseMember& lhs, const CourseMember& rhs) {
  if (lhs.last_name_[0] == rhs.last_name_[0] && lhs.last_name_[1] <= rhs.last_name_[1])
  {
    return true;
  }
  return false;
}


/**compares first two letters of lastname to determine relationship
@param lhs rhs the two CourseMember objects to be compared
@return true if lhs.last_name_ and rhs.last_name start with same character
and >= holds for second character
//e.g. Zion >= Ligorio >= Limoni >= Laranga >= Aleman
// and Limoni >= Ligorio (==) and Ligorio >= Laranga (>)
*/
bool operator>=(const CourseMember& lhs, const CourseMember& rhs) {
  if (lhs.last_name_[0] == rhs.last_name_[0] && lhs.last_name_[1] >= rhs.last_name_[1])
  {
    return true;
  }
  return false;
}

void CourseMember::displayMember() {

}
