#include "LinkedBag.hpp"
#include <iostream>

int main () {

LinkedBag<int> Saar;
for (int j=1; j<6; j++) {
  Saar.add(j);
}
LinkedBag<int> Haber;
for (int k=8; k<17; k++) {
  Haber.add(k);
}

LinkedBag<int> fullName;
fullName = Saar.bagUnion(Haber);

std::vector<int> v3;

std::cout << fullName.getCurrentSize() << std::endl;
v3 = fullName.toVector();
std::cout << fullName.get

for (int i=0; i<v3.size(); i++) {
  std::cout<<v3[i];
}
}
