//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

//  Modified by Tiziana Ligorio for CSCI 235 Hunter college 2019

/** Header file for an array-based implementation of the ADT bag.
 @file ArrayBag.h */

 /**
 Name: Saar Haber
 Course: CS 235
 Assingment: Project 1C
 Date: 2/20/19
 */

#include <fstream>
#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include "BagTest.hpp"


//public

  //
  // BagTest::BagTest() {}
  // BagTest::BagTest (ArrayBag<CourseMember> people)
  // {
  //   bag_=createBagFromInput();
  // }

  ArrayBag<CourseMember> BagTest::createBagFromInput(std::string input_file)
  {
    std::string str2;
    std::string str3;
    std::string id1;
    std::string tytle;
    int id;
    char delim = ',';
    std::fstream inFile;
    inFile.open(input_file.c_str());
    CourseMember Bag;
    if(inFile.fail()){
  		std::cout << "ERROR" << std::endl;
  		exit(1);
  	}
    while (getline( inFile, id1, delim ) &&
    getline( inFile, str2, delim ) &&
    getline( inFile, str3, delim ) &&
    getline( inFile, tytle)) {

      //inFile.ignore();
      id = atoi(id1.c_str());
      //c_str?
      CourseMember Person(id, str2, str3);

     bag_.add(Person);
     }
     inFile.close();
    return bag_;

  }

/**
@pre the input file is in csv format as follows:
“id,first_name,last_name,title\n”
@post this function asks the user for an input file name.
It extracts the information necessary to create a CourseMember object
from each line in the input file, and it adds the corresponding
CourseMember object to bag_.
@return returns the populated bag_
**/
ArrayBag<CourseMember> BagTest::testCourseMemberBag()
{
std::cout << "Please enter a file's name: " << std::endl;
std::string str;
getline(std::cin, str);

ArrayBag<CourseMember> Bag;
Bag = createBagFromInput(str);
return Bag;
}
/**
@post asks the user for a last name and removes ONE CourseMember
with that last name if it finds one
@return returns the bag_ after removal if any
**/
ArrayBag<CourseMember> BagTest::removeCourseMemberFromBag()
{
  std::cout<< "Please enter last name of CourseMember to remove: ";
  std::string str;
  getline (std::cin, str);

  std::vector<CourseMember> members = bag_.toVector();
  int found_index;
  bool found = false;
  for (int i=0; i<members.size(); i++) {
    if (str == members[i].getLastName()) {
      found_index = i;
      found = true;
      break;
    }
  }
  if (found) {
    bag_.remove(members[found_index]);
  }

  return bag_;
}

/**
 @param member to be removed from bag_
 @post removes one occurrence of member if found in bag_
 @return returns the bag_ after removal if any
 **/
 ArrayBag<CourseMember>  BagTest::removeCourseMemberFromBag(const CourseMember&
member)
{
  if (bag_.contains(member)) {
      bag_.remove(member);
  }

  return bag_;
}
/**
@post prints to the standard output all CourseMeber
objects found in bag_, one pre line if the format:
id first_name last_name
**/
void BagTest::displayCourseMemberBag(const ArrayBag<CourseMember>& a_bag)
{
  std::vector<CourseMember> toPrint = a_bag.toVector();
  for (int i=0; i<toPrint.size(); i++)
  {
    std::cout << toPrint[i].getID() << " "
              << toPrint[i].getFirstName() << " "
              << toPrint[i].getLastName() << std::endl;
  }
  return;
}


//private
