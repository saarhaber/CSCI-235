
#include "ArrayBag.hpp"
#include <iostream>
#include <vector>

int main () {

ArrayBag<int> Saar;
Saar.add(1);
Saar.add(2);
Saar.add(3);
Saar.add(3);
Saar.add(8);
ArrayBag<int> Haber;
Haber.add(2);
Haber.add(3);
Haber.add(4);
Haber.add(6);
Haber.add(551);
Haber.add(2);
Haber.add(2);
Haber.add(87);
Haber.add(405);

ArrayBag<int> Haber3;
ArrayBag<int> Haber4;
std::vector<int> v3;
std::vector<int> v4;

Haber3 = Haber.bagIntersectionNoDuplicates(Saar);
v3 = Haber3.toVector();
std::cout << "v3 ";

for (int i=0; i<v3.size(); i++) {
  std::cout<< v3[i] << " ";
}

std::cout << std::endl;

Haber4 = Haber.bagDifference(Saar);
v4 = Haber4.toVector();

std::cout << "v4 ";
for (int i=0; i<v4.size(); i++) {
  std::cout<< v4[i] << " ";
}


return 0;
}
