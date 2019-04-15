//Saar Haber
#include "City.hpp"
#include "RouteMap.hpp"
#include <string>
#include <iostream>

int main () {

  //testing a City
  // std::string saar= "P";
  // City Haifa (saar);
  // std::cout << Haifa.getName() <<std::endl;
  // if (!Haifa.isVisited()) {
  //   std::cout << "Not Visited" <<std::endl;
  // }
  // Haifa.makeAVisit();
  // if (Haifa.isVisited()) {
  //   std::cout << "Now it is Visited" <<std::endl;
  // }
  //
  // Haifa.addAdjacent("Q");
  // std::cout << Haifa.Adjacents_[0] <<std::endl;
  // std::cout << Haifa.Adjacents_.size() <<std::endl;

RouteMap firstTry;
firstTry.readMap("stuff.csv");
// for (int i=0; i<firstTry.getCity(7)->Adjacents_.size(); i++) {
//   std::cout << " Hi " << std::endl;
//   std::cout << firstTry.getCity(7)->Adjacents_[i] << std::endl;
//   std::cout << "sdf " << std::endl;
// }
firstTry.isRoute(firstTry.getCity(7), firstTry.getCity(8));


}
