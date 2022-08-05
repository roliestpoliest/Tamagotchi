#ifndef RABBIT_H
#define RABBIT_H
#include "Pet.h"

class Rabbit : public Pet{
public:
  Rabbit();
  Rabbit(string _name, string _species, int _friendshipLevel, int _happinessLevel, int _energyLevel, int _hungerLevel, int _hydrationLevel);

  void fly() override{} //nothing
  void sing() override{} //nothing

  void hop() override;
  void pickUp() override;

  void praise() override{} //nothing
  void reprimand() override{} //nothing
  void chaseBirds() override{} //nothing

  void pet() override;
  void sleep() override;
  void ignore() override;
  void feed() override;
  void water() override;

  string onomonopia() const override{
    vector <string> onomonopia{"smo", "sniff", "meep"};
    int size = onomonopia.size();
    srand(time(0));
    int index = (rand() % size);
    return onomonopia.at(index);
  }
  void printActions() const override{
    vector <string> actions{"1. hop", "2. pickUp", "3. pet", "4. ignore", "5. sleep", "6. feed", "7. water"}; 
    for(int i = 0; i < actions.size(); i++){
      cout << "•" << actions.at(i) << endl;
    }
  }
  void printPet() const override{
    //art provided by https://www.asciiart.eu/animals/
    cout <<  " \\\\" << endl;
    cout <<  "  \\\\_" << endl;
    cout <<  "  ( _\\" << endl;
    cout <<  "  / \\__" << endl;
    cout <<  " / _/`\"`" << endl;
    cout <<  "{\\  )_" << endl;
    cout <<  "  `\"\"\"`" << endl;
  }
};


#endif 
