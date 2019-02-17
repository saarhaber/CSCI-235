
#include "ArrayBag.hpp"
#include <iostream>

int main () {

ArrayBag<int> Saar;
Saar.add(1);
Saar.add(12);
Saar.add(113);
Saar.add(152);
Saar.add(551);
ArrayBag<int> Haber;
Haber.add(2);
Haber.add(3);
Haber.add(4);
Haber.add(405);
ArrayBag<int> Haber3;

  Haber3 = Haber.bagUnion(Saar);
  std::cout<< Saar.getCurrentSize();
  std::cout<< Haber.getCurrentSize();
  std::cout<< Haber3.getCurrentSize();




return 0;
}
