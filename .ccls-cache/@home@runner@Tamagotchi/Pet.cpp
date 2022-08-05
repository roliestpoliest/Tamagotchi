#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Pet.h"
using namespace std;


Pet::Pet(){
  name = "Unknown";
  species = "Unknown";
  friendshipLevel = 0;
  happinessLevel = 0;
  energyLevel = 0;
  hungerLevel = 0;
  hydrationLevel = 0;
}

Pet::Pet(string _name, string _species, int _friendshipLevel, int _happinessLevel, int _energyLevel, int _hungerLevel, int _hydrationLevel){
  name =_name;
  species =_species;
  friendshipLevel =_friendshipLevel;
  happinessLevel =_happinessLevel;
  energyLevel =_energyLevel;
  hungerLevel =_hungerLevel;
  hydrationLevel =_hydrationLevel;
}

int Pet::levelCap(int currLevel){
  if(currLevel > 100){
    currLevel = 100;
  }
  if(currLevel < 0){
    currLevel = 0;
  }
  return currLevel;
}

string Pet::getName(){
  return name;
}
void Pet::Pet::setName(string _name){
  name = _name;
}

string Pet::getSpecies(){
  return species;
}
void Pet::setSpecies(string _species){
  species = _species;
}


int Pet::getFriendshipLevel(){
  return friendshipLevel;
}
void Pet::setFriendshipLevel(int _level){
  friendshipLevel = _level;
  friendshipLevel = levelCap(friendshipLevel);
}

int Pet::getHappinessLevel(){
  return happinessLevel;
}
void Pet::setHappinessLevel(int _level){
  happinessLevel = _level;
  happinessLevel = levelCap(happinessLevel);
}

int Pet::getEnergyLevel(){
  return energyLevel;
}
void Pet::setEnergyLevel(int _level){
  energyLevel = _level;
  energyLevel =levelCap(energyLevel);
}

int Pet::getHungerLevel(){
  return hungerLevel;
}
void Pet::setHungerLevel(int _level){
  hungerLevel = _level;
  hungerLevel = levelCap(hungerLevel);
}

int Pet::getHydrationLevel(){
  return hydrationLevel;
}
void Pet::setHydrationLevel(int _level){
  hydrationLevel = _level;
  hydrationLevel = levelCap(hydrationLevel);
}

void Pet::printStats(){
  cout << "---------------------------------" << endl;
  cout << "|Name: " << name << endl;
  cout << "|Species: " << species << endl;
  cout << "|Friendship Level: " << friendshipLevel << "%" << endl;
  cout << "|Happiness Level: " << happinessLevel << "%" << endl;
  cout << "|Energy Level: " << energyLevel << "%" << endl;
  cout << "|Hunger Level: " << hungerLevel << "%" << endl;
  cout << "|Hydration Level: " << hydrationLevel << "%" << endl;
  cout << "---------------------------------" << endl;
}

void Pet::setRandomStats(int _upper = 100, int _lower = 50){
  int upper = _upper - _lower + 1;
  int lower = _lower;
  // default range (50, 100)?
  srand(time(0));

  setFriendshipLevel((rand() % upper) + lower);
  setHappinessLevel((rand() % upper) + lower);
  setEnergyLevel((rand() % upper) + lower);
  setHungerLevel((rand() % upper) + lower);
  setHydrationLevel((rand() % upper) + lower);
}
