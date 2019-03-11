/**
Name: Saar Haber
Course: CS 235
Assingment: 2C
polytest.cpp
*/
 #include <fstream>
 #include <string>
 #include "polytest.hpp"
 #include <iostream>
 #include <stdlib.h>




/**
@param cm_list the list to be populated with pointers to CourseMember
@param input_file the file containing data used to generate CourseMemberderived objects to add to cm_list
@post reads parameters from input_file to call addMemberToList()
 */
void populateCmList(List<CourseMember*>& cm_list, std::string input_file)
{
  std::string id1;
  std::string first;
  std::string last;
  std::string title;
  int id;

  char delim = ',';
  std::fstream inFile;
  inFile.open(input_file.c_str());
  if(inFile.fail()){
    std::cout << "ERROR" << std::endl;
    exit(1);
  }
  while (getline( inFile, id1, delim ) &&
  getline( inFile, first, delim ) &&
  getline( inFile, last, delim ) &&
  getline( inFile, title)) {

  id = atoi(id1.c_str());
  addMemberToList(cm_list, id, first, last, title);

  }
  inFile.close();
}

/**
@post instantiates a new object - Student, TeachingAssistant or Instructor -
as indicated by the title parameter, randomly generate relevant data not
provided by parameters (e.g. major_, gpa_ etc.) and append a pointer to
cm_list that points to the newly instantiated object
 */
void addMemberToList(List<CourseMember*>& cm_list, int id, const std::string&
first_name, const std::string& last_name, const std::string& title) {
  if (title == "Student" || title == "student") {
    Student* s_ptr = new Student(id, first_name, last_name);
    //select random gpa and major
    s_ptr->setGpa(randGpa());
    s_ptr->setMajor(randMajor());
    CourseMember* c_ptr = s_ptr;
    cm_list.insert(cm_list.getLength(), c_ptr);
    s_ptr = nullptr;
    }
  else if (title == "Instructor" || title == "Instructor") {
    Instructor* s_ptr = new Instructor(id, first_name, last_name);
    //select random gpa and major
    s_ptr->setOffice("1000C");
    s_ptr->setContact("235Instructors@hunter.cuny.edu");
    CourseMember* c_ptr = s_ptr;
    cm_list.insert(cm_list.getLength(), c_ptr);
    s_ptr = nullptr;
    }
  else if (title == "Teaching Assistant" || title == "teaching assistent") {
    TeachingAssistant* t_ptr = new TeachingAssistant(id, first_name, last_name);
    //select random gpa and major
    t_ptr->setGpa(randGpa());
    t_ptr->setMajor(randMajor());
    t_ptr->setRole(randRole());
    CourseMember* c_ptr = t_ptr;
    cm_list.insert(cm_list.getLength(), c_ptr);
    t_ptr = nullptr;
    }
}

/**
@return a number randomly sampled from
 {4.0, 3.75, 3.5, 3.25, 3.0, 2.75, 2.5, 2.25, 2.0}
 */
double randGpa() {
  double gpa_list[9] =  {4.0, 3.75, 3.5, 3.25, 3.0, 2.75, 2.5, 2.25, 2.0};
  return gpa_list[rand() % 9];
}
/**
@return a string randomly sampled from
 {"Computer Science", "Literature", "Music", "Philosophy", "Physics",
"Theatre", "Computational Biology", "Mathematics", "Geography",
"Linguistics"}
 */
std::string randMajor() {
  std::string majors[] =  {"Computer Science", "Literature", "Music", "Philosophy", "Physics",
"Theatre", "Computational Biology", "Mathematics", "Geography",
"Linguistics"};
  return majors[rand()%9];
}
/**
@return a ta_role randomly sampled from
 {LAB_ASSISTANT, LECTURE_ASSISTANT,FULL_ASSISTANT}
 */
ta_role randRole() {
  int number = rand()%3;
  if (number==1) {
    return LAB_ASSISTANT;
  }
  else if (number == 2) {
    return LECTURE_ASSISTANT;
  }
  else {
    return FULL_ASSISTANT;
  }
}
