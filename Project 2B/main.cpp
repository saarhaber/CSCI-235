#include "List.hpp"


int main() {
List<int> Saar;
Saar.insert(0, 4);
Saar.insert(0, 7);
Saar.insert(0, 5);
Saar.insert(0, 2);
Saar.insert(0, 3);
Saar.insert(0, 4);
Saar.insert(0, 5);
Saar.insert(0, 9);
Saar.insert(0, 5);
Saar.insert(0, 4);
Saar.insert(0, 3);
Saar.insert(0, 6);
Saar.insert(0, 5);
Saar.insert(0, 4);
Saar.insert(0, 3);

Saar.traverse();

List<int> Sub;

size_t position = 7;
Sub = Saar.scanSublist(position);
Sub.traverse();

}
