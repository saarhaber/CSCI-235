//Saar Haber

#include "RouteMap.hpp"

#include <string>
#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <sstream>

//----------PUBLIC FUNCTIONS-------------------//
RouteMap::RouteMap() {
}
/**
@param input_file_name of a csv file representing a route map where the first
 line is a comma-separated list of city names, and the remainder is a
 comma-separated list of city-pairs of the form A-B, indicating that B
 is adjacent to A (i.e. there is an arrow in the map going from A to B)
@post this depends on your design, the input data representing the map must
 have been stored. Cities must be stored in the same order in which
 they are read from the input file
**/
bool RouteMap::readMap(std::string input_file_name){

  std::fstream inFile;
  inFile.open(input_file_name.c_str());

  if(inFile.fail()){
    std::cout << "ERROR" << std::endl;
    exit(1);
  }

  std::string cityName;
  std::string cityFrom, cityTo;
  std::string listnames;
  getline(inFile, listnames);
  char delim1 = ',';
  int i=0;
  std::string cit="";
  std::istringstream ss(listnames);
  while(getline(ss, cit, ',')) {
    Cities.push_back(cit);
}
std::string listnames2;
getline(inFile, listnames2, '\n');
std::istringstream ss2(listnames2);

  char delim2 = '-';
  while (getline(ss2, cityFrom, delim2) &&
  getline(ss2, cityTo, delim1)) {
    for (int i=0; i<Cities.size(); i++) {
      if (Cities[i].getName() == cityFrom) {
        Cities[i].addAdjacent(cityTo);
      }
    }
  }
  inFile.close();
};

/**
@return a pointer to the city found at position, where
 0 <= position <= n-1, and n is the number of cities,
 and cities are stored in the same order in which they appear
 in the input file
**/
City* RouteMap::getCity(size_t position){

      for (int i=0; i<Cities.size(); i++) {
        if (i == position) {
          return &(Cities[i]);
        }
      }
}

/**
@return true if there is a route from origin to destination, false otherwise
@post if a route is found from origin to destination, it will print it to
 standard output in the form ORIGIN -> ... -> DESTINATION
**/
bool RouteMap::isRoute(City* origin, City* destination){

  if (origin->isVisited() == false) {
    Route.push(origin);
    origin->makeAVisit();
    if (origin->isVisited()) {
    }
  }


  for (int j=0; j<origin->Adjacents_.size(); j++) {
    for (int i=0; i<Cities.size(); i++) {

      if (getCity(i)->getName() == origin->Adjacents_[j] && !getCity(i)->isVisited()) {
        return (isRoute(getCity(i), destination));
      }
      if (getCity(i)->getName() == origin->Adjacents_[j] && getCity(i)->isVisited()) {
      }
    }
  }

  if (!Route.empty()) {
    if (Route.top()->getName() == destination->getName()) {
      std::string result = Route.top()->getName();
      Route.pop();
        while (!Route.empty()){
          result =  Route.top()->getName() + " -> " + result;
          Route.pop();
      }
      std::cout << result << std::endl;
      return true;
    }
  }

  if (!Route.empty()) {
    Route.pop();
      if (Route.empty()) {
        return false;
      }

    return isRoute(Route.top(), destination);
  }

  if (Route.empty()) {
    return false;
  }
  }
