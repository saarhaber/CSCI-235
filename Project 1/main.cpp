
#include "Student.hpp"
#include "TeachingAssistant.hpp"
#include "Instructor.hpp"
#include "Instructor.cpp"
#include <iostream>

int main () {

/*
Student Asi = {2,"f","e"};
Asi.setMajor("Computer Science");
Asi.setGpa(3.947);
std::cout << Asi.getID() << std::endl;
std::cout << Asi.getFirstName() << std::endl;
std::cout << Asi.getLastName() << std::endl;
std::cout << Asi.getMajor() << std::endl;
std::cout << Asi.getGpa() << std::endl;

TeachingAssistant Asi = {42,"fasd","ead"};
Asi.setHours(31);
Asi.setRole(BOTH);
std::cout << Asi.getID() << std::endl;
std::cout << Asi.getFirstName() << std::endl;
std::cout << Asi.getLastName() << std::endl;
std::cout << Asi.getHours() << std::endl;
std::cout << Asi.getRole() << std::endl;
*/
Instructor Asi = {412,"dddd","ffff"};
Asi.setOffice("Enstien street");
Asi.setContact("214124 saar");
std::cout << Asi.getID() << std::endl;
std::cout << Asi.getFirstName() << std::endl;
std::cout << Asi.getLastName() << std::endl;
std::cout << Asi.getOffice() << std::endl;
std::cout << Asi.getContact() << std::endl;

return 0;
}
