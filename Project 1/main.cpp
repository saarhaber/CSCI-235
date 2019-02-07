
#include "Student.hpp"
#include "TeachingAssistant.hpp"
#include "Instructor.hpp"
#include <iostream>

int main () {


Student Asi = {2,"f","e"};
Asi.setMajor("Computer Science");
Asi.setGpa(3.947);
std::cout << Asi.getID() << std::endl;
std::cout << Asi.getFirstName() << std::endl;
std::cout << Asi.getLastName() << std::endl;
std::cout << Asi.getMajor() << std::endl;
std::cout << Asi.getGpa() << std::endl;

TeachingAssistant Assi = {42,"fasd","ead"};
Assi.setHours(31);
Assi.setRole(BOTH);
std::cout << Assi.getID() << std::endl;
std::cout << Assi.getFirstName() << std::endl;
std::cout << Assi.getLastName() << std::endl;
std::cout << Assi.getHours() << std::endl;
std::cout << Assi.getRole() << std::endl;

Instructor Asii = {412,"dddd","ffff"};
Asii.setOffice("Enstien street");
Asii.setContact("214124 saar");
std::cout << Asii.getID() << std::endl;
std::cout << Asii.getFirstName() << std::endl;
std::cout << Asii.getLastName() << std::endl;
std::cout << Asii.getOffice() << std::endl;
std::cout << Asii.getContact() << std::endl;

return 0;
}
