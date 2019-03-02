#include "LinkedBag.hpp"
#include <iostream>

int main () {

LinkedBag<int> Saar;
for (int j=1; j<12; j++) {
  Saar.add(j);
}

Saar.removeRetainOrder(7);

std::vector<int> v = Saar.toVector();
for (int i=0; i<v.size(); i++) {
  std::cout << v[i] <<" ";
}


}
