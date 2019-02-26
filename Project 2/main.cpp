#include "LinkedBag.hpp"
#include <iostream>

int main () {

LinkedBag<int> Saar;
for (int j=1; j<6; j+2) {
  Saar.add(j);
}
LinkedBag<int> Haber;
for (int k=2; k<7; k+2) {
  Haber.add(k);
}

LinkedBag<int> fullName;
fullName = Saar.bagUnion(Haber);

std::vector<int> v;
v = fullName.toVector();

for (int i=0; i<v.size(); i++) {
  std::cout << v[i] << " ";
}

}
