//Saar Haber

#include <string>
#include <vector>


#ifndef CITY_
#define CITY_

class City {
public:
  City(std::string name);
  bool isVisited();
  bool isAdjacent(std::string CityName);
  void setVector();
  void makeAVisit();
  std::string getName();
  void addAdjacent(std::string cityName);
  std::vector<std::string> Adjacents_;


private:
  std::string name_;
  bool visited_;

};

//#include "City.cpp"
#endif
