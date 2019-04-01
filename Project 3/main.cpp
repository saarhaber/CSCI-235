
#include <iostream>
#include "LinkedList.hpp"
#include "Node.hpp"

int main () {
LinkedList <int> Saar;
Saar.insert(1,4);
Saar.insert(2,3);
Saar.insert(3,2);
Saar.insert(4,1);
Saar.insert(5,0);

Saar.invert();

for (int i=0; i<Saar.getLength(); i++) {
  std::cout << Saar.getEntry(i) << " ";
}


// for (int i=0; i<Saar.getLength(); i++) {
//   std::cout << Saar.getEntry(i) << " ";
// }

}
