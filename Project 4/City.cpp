//Saar Haber
#include <string>
#include "City.hpp"

//----------PUBLIC FUNCTIONS-------------------//
City::City(std::string name){
  name_ = name;
  visited_ = false;
}

bool City::isVisited(){
  return visited_;
}

bool City::isAdjacent(std::string CityName){
  for (int i=0; i<Adjacents_.size(); i++) {
    if (Adjacents_[i] == CityName) {
      return true;
    }
  }
  return false;
}

void City::makeAVisit() {
  visited_ = true;
}

std::string City::getName() {
  return name_;
}

void City::addAdjacent(std::string cityName){
  Adjacents_.push_back(cityName);
}
