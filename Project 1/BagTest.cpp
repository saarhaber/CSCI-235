
#include "BagTest.hpp"
#include <fstream>
#include <string>
#include <cstring>
#include <iostream>
#include "CourseMember.hpp"
#include "ArrayBag.hpp"


//public

/**
@pre the input file is in csv format as follows:
“id,first_name,last_name,title\n”
@post this function asks the user for an input file name.
It extracts the information necessary to create a CourseMember object
from each line in the input file, and it adds the corresponding
CourseMember object to bag_.
@return returns the populated bag_
**/
ArrayBag<CourseMember> BagTest ::testCourseMemberBag()
{
std:: cout<< "Please enter a file's name: ";
ArrayBag<CourseMember> Bag;
std::string str;
getline(std::cin, str);
Bag = createBagFromInput(str);
return Bag;
}
/**
@post asks the user for a last name and removes ONE CourseMember
with that last name if it finds one
@return returns the bag_ after removal if any
// **/
// ArrayBag<CourseMember> BagTest ::removeCourseMemberFromBag();
// /**
// @post prints to the standard output all CourseMeber
// objects found in bag_, one pre line if the format:
// id first_name last_name
// **/
// void BagTest ::displayCourseMemberBag(const ArrayBag<CourseMember>& a_bag);
//
// /**
//  @param member to be removed from bag_
//  @post removes one occurrence of member if found in bag_
//  @return returns the bag_ after removal if any
//  **/
//  ArrayBag<CourseMember> BagTest ::removeCourseMemberFromBag(const CourseMember&
// member);

//private

 ArrayBag<CourseMember> BagTest ::createBagFromInput(std::string input_file)
 {
   std::string str2="";
   std::string str3="";
   std::string id1="";
   std::string tytle="";
   int id=0;
   std::fstream inFile;
   inFile.open(input_file.c_str());
   ArrayBag<CourseMember> Bag;
   while (!inFile.fail()) {
     std::getline( inFile, id1, ',' );
     std::getline( inFile, str2, ',' );
     std::getline( inFile, str3, ',' );
     std::getline( inFile, tytle);
     //inFile.ignore();
     id = std::stoi(id1);
     CourseMember Person(id, str2, str3);

    Bag.add(Person);
    }
    inFile.close();
   return Bag;

 }
