/**
// @file  TeachingAssistant.hpp
//  Project1B
//  Saar Haber
*/

#ifndef TeachingAssistant_hpp
#define TeachingAssistant_hpp

#include <string>
#include "Student.hpp"

enum ta_role {LAB_ASSISTANT, LECTURE_ASSISTANT, BOTH};


class TeachingAssistant : public Student
{
public:
    /** Parameterized constructor
    inharits:
     @param id the TeachingAssistant's unique identifier
     @param first the TeachingAssistant's first name
     @param last the TeachingAssistant's last name
     */
    TeachingAssistant(int id, std::string first, std::string last);

    //********** Accessor Methods ****************


    /** gets hours_per_week_ */
    int getHours() const;

    /** get role_ */
    ta_role getRole() const;

    /** sets hours_per_week_ */
    void setHours(const int hours);

    /** sets role_ */
    void setRole(const ta_role role);

private:
    /** the TeachingAssistant's major */
    int hours_per_week_;
    /** the TeachingAssistant's role */
    ta_role role_;



}; //end TeachingAssistant
#endif /* TeachingAssistant_hpp */
