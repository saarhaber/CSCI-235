/**
// @file  Instructor.hpp
//  Project1B
//  Saar Haber
*/

#ifndef Instructor_hpp
#define Instructor_hpp

#include <string>
#include "CourseMember.hpp"

class Instructor : public CourseMember
{
public:
    /** Parameterized constructor
    inharits:
     @param id the Instructor's unique identifier
     @param first the Instructor's first name
     @param last the Instructor's last name
     */
    Instructor(int id, std::string first, std::string last);

    //********** Accessor Methods ****************

    /** @return returns office_; */
    std::string getOffice() const;

    /** @return returns contact__ */
    std::string getContact() const;

    /** sets Office_ */
    void setOffice(const std::string office);

    /** sets contact_ */
    void setContact(const std::string contact);

protected:
    std::string office_; /** the Instructor's Office */
    std::string contact_; /** the Instructor's contact_ */

}; //end Instructor
#endif /* Instructor_hpp */
