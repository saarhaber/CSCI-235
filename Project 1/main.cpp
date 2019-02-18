
#include "ArrayBag.hpp"
#include <iostream>
#include <vector>

int main () {

ArrayBag<int> Saar;
Saar.add(1);
Saar.add(3);
Saar.add(113);
Saar.add(3);
Saar.add(551);
ArrayBag<int> Haber;
Haber.add(2);
Haber.add(3);
Haber.add(4);
Haber.add(6);
Haber.add(551);
Haber.add(405);
Haber.add(405);

ArrayBag<int> Haber3;
std::vector<int> v;

Haber3 = Haber.bagIntersectionNoDuplicates(Saar);
v = Haber3.toVector();

for (int i=0; i<v.size(); i++) {
  std::cout<< v[i] << " ";
}


return 0;
}
