/**
Name: Saar Haber
Course: CS 235
Assingment: 2C
polytest.hpp
*/


#ifndef polytest_hpp
#define polytest_hpp
#include "Student.hpp"
#include "Instructor.hpp"
#include "TeachingAssistant.hpp"
#include "CourseMember.hpp"
#include "List.hpp"


  void populateCmList(List<CourseMember*>& cm_list, std::string input_file);
  void addMemberToList(List<CourseMember*>& cm_list, int id, const std::string&
  first_name, const std::string& last_name, const std::string& title);
  double randGpa();
  std::string randMajor();
  ta_role randRole();

 //end polytest


#endif /* polytest_hpp */
