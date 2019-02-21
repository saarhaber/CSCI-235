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

#ifndef BAG_TEST_
#define BAG_TEST_

#include <vector>
#include <iostream>
#include "ArrayBag.hpp"
#include "CourseMember.hpp"


class BagTest
{
public:

   // BagTest();
  // BagTest (ArrayBag<CourseMember> people);
  /**
 @pre the input file is in csv format as follows:
 “id,first_name,last_name,title\n”
 @post this function asks the user for an input file name.
 It extracts the information necessary to create a CourseMember object
 from each line in the input file, and it adds the corresponding
 CourseMember object to bag_.
 @return returns the populated bag_
 **/
 ArrayBag<CourseMember> testCourseMemberBag();
 /**
 @post asks the user for a last name and removes ONE CourseMember
 with that last name if it finds one
 @return returns the bag_ after removal if any
 **/
 ArrayBag<CourseMember> removeCourseMemberFromBag();
 /**
  @post prints to the standard output all CourseMeber
  objects found in bag_, one pre line if the format:
  id first_name last_name
  **/
  void displayCourseMemberBag(const ArrayBag<CourseMember>& a_bag);

ArrayBag<CourseMember> removeCourseMemberFromBag(const CourseMember&
member);

private:
   ArrayBag<CourseMember> bag_;
   ArrayBag<CourseMember> createBagFromInput(std::string input_file);


}; // end ArrayBag


#endif
