
#include "ArrayBag.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "CourseMember.hpp"
#include "BagTest.hpp"

int main () {

// ArrayBag<int> Saar;
// Saar.add(1);
// Saar.add(2);
// Saar.add(2);
// Saar.add(2);
// Saar.add(2);
// Saar.add(3);
// Saar.add(3);
// Saar.add(8);
// ArrayBag<int> Haber;
// Haber.add(2);
// Haber.add(3);
// Haber.add(3);
// Haber.add(3);
// Haber.add(551);
// Haber.add(2);
// Haber.add(2);
// Haber.add(87);
// Haber.add(405);
//
// ArrayBag<int> Haber3;
// ArrayBag<int> Haber4;
// ArrayBag<int> Haber5;
// std::vector<int> v3;
// std::vector<int> v4;
// std::vector<int> v5;
//
// Haber5 = Haber.bagIntersection(Saar);
// v5 = Haber5.toVector();
//
// std::cout << "v5 ";
// for (int i=0; i<v5.size(); i++) {
//   std::cout<< v5[i] << " ";
// }

BagTest bagOfMembers;
ArrayBag<CourseMember> Saar = bagOfMembers.testCourseMemberBag();
std::vector<CourseMember> v3;
v3 = Saar.toVector();
for(int i=80; i<120; i++)
std::cout<< v3[i].getID() << " "<< v3[i].getFirstName() << " "<< v3[i].getLastName() <<std::endl;
std::cout<<" ok";


return 0;
}
