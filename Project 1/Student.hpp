/**
// @file  Student.hpp
//  Project1B
//  Saar Haber
*/

#ifndef Student_hpp
#define Student_hpp

#include <string>
#include "CourseMember.hpp"

class Student : public CourseMember
{
public:
    /** Parameterized constructor
    inharits:
     @param id the student's unique identifier
     @param first the student's first name
     @param last the student's last name
     */
    Student(int id, std::string first, std::string last);

    //********** Accessor Methods ****************

    /** @return returns major_; */
    std::string getMajor() const;

    /** @return returns gpa_ */
    double getGpa() const;

    /** sets major_ */
    void setMajor(const std::string major);

    /** sets gpa_ */
    void setGpa(const double gpa);

protected:
    std::string major_; /** the Student's major */
    double gpa_; /** the Student's gpa */



}; //end Student
#endif /* Student_hpp */
