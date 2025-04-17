#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

std::map<std::string, int> loadTrafficData(const std::string& filename) {
  //implement your function here!
  std::string airport_code, line;
  int number_of_passengers;
  std::map<std::string, int> MAP;
  std::ifstream inFile(filename);
  if(!inFile.is_open()){
    std::cerr<<"-1"<<std::endl;
  }
  while(std::getline(inFile, line)){
    airport_code = line.substr(0, line.length() - 1);
    number_of_passengers = std::stoi(line.substr(line.length() - 1));
    MAP[airport_code] = number_of_passengers;
  }
  inFile.close();
  return MAP;
}

void updateTrafficData(const std::string& filename, std::map<std::string, int>& dataMap) {
    //implement your function here!
    std::string airport_code, line;
    int number_of_passengers;
    std::ifstream inFile(filename);
    if(!inFile.is_open()){
      std::cerr<<"-1"<<std::endl;
    }
    while(std::getline(inFile, line)){
      airport_code = line.substr(0, line.length() - 1);
      number_of_passengers = std::stoi(line.substr(line.length() - 1));
      dataMap[airport_code] = number_of_passengers;
    }
    inFile.close();
}