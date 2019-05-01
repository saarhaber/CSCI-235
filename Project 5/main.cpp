//Saar Haber

#include <iostream>
#include "WordLadder.hpp"

int main () {
  WordLadder firstTry;

  std::vector<std::string> ladderTry = firstTry.findShortestLadder("card", "road");
  for (int i=0; i<ladderTry.size()-1; i++) {
    std::cout << ladderTry[i] << " -> ";
  }
  std::cout << ladderTry[ladderTry.size()-1] << std::endl;

}
