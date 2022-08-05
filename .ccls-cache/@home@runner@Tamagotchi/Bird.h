#ifndef BIRD_H
#define BIRD_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "Pet.h"
using namespace std;

class Bird : public Pet{
public:
  Bird();
  Bird(string _name, string _species, int _friendshipLevel, int _happinessLevel, int _energyLevel, int _hungerLevel, int _hydrationLevel);
  
  void fly() override;
  void sing() override;

  void hop() override{} //nothing
  void pickUp() override{} //nothing

  void praise() override{} //nothing
  void reprimand() override{}//nothing
  void chaseBirds() override{}//nothing

  void pet() override;
  void sleep() override;
  void ignore() override;
  void feed() override;
  void water() override;

  string onomonopia() const override{
    vector <string> onomonopia{"squack", "chirp", "pii", "peep", "meep", "tweet", "caw", "hoot"};
    int size = onomonopia.size();
    srand(time(0));
    int index = (rand() % size);
    return onomonopia.at(index);
  }
  void printActions() const override{
    vector <string> actions{"1. fly", "2. sing", "3. pet", "4. sleep", "5. ignore", "6. feed", "7. water"}; 
    for(int i = 0; i < actions.size(); i++){
      cout << "•" << actions.at(i) << endl;
    }
  }
  void printPet() const override{
    //art provided by https://www.asciiart.eu/animals/
    cout << "   \\\\ " << endl;
    cout << "   (o> " << endl;
    cout << "\\\\_//) " << endl;
    cout << " \\_/_) " << endl;
    cout << "  _|_ " << endl;
  }
};

#endif