#ifndef PET_H
#define PET_H
#include <iostream>
#include <vector>
#include <cstdlib>
#include "Time.h"

using namespace std;

class Pet : public Time{
public:
  Pet();
  Pet(string _name, string _species, int _friendshipLevel, int _happinessLevel, int _energyLevel, int _hungerLevel, int _hydrationLevel);

  int levelCap(int whatLevel);

  string getName();
  void setName(string _name);

  string getSpecies();
  void setSpecies(string _species);

  int getFriendshipLevel();
  void setFriendshipLevel(int _level);

  int getHappinessLevel();
  void setHappinessLevel(int _level);

  int getEnergyLevel();
  void setEnergyLevel(int _level);

  int getHungerLevel();
  void setHungerLevel(int _level);

  int getHydrationLevel();
  void setHydrationLevel(int _level);

  void printStats();
  void setRandomStats(int _upper, int _lower);

  virtual string onomonopia() const{return "";}
  virtual void printActions() const{}
  virtual void printPet() const{}
  
  virtual void fly() {}
  virtual void sing() {}

  virtual void hop() {}
  virtual void pickUp() {}

  virtual void praise() {}
  virtual void reprimand() {}
  virtual void chaseBirds() {}

  virtual void pet() {}
  virtual void sleep() {}
  virtual void ignore() {}
  virtual void feed() {}
  virtual void water() {}

private:
  string name;
  string species;
  int friendshipLevel;
  int happinessLevel;
  int energyLevel;
  int hungerLevel;
  int hydrationLevel;
};

#endif