//Saar Haber

#include "polytest.hpp"
#include <string>
#include "CourseMember.hpp"
#include "List.hpp"


int main () {
List<CourseMember*> cm_list;
std::string input_file = "roster.csv";
populateCmList(cm_list, input_file);
cm_list.getItem(7)->displayMember();
}
