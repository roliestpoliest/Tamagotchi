#ifndef CAT_H
#define CAT_H
#include "Pet.h"

class Cat : public Pet{
public:
  Cat();
  Cat(string _name, string _species, int _friendshipLevel, int _happinessLevel, int _energyLevel, int _hungerLevel, int _hydrationLevel);

  void fly() override{} // nothing
  void sing() override{} // nothing

  void hop() override{} // nothing
  void pickUp() override{} // nothing

  void praise() override;
  void reprimand() override;
  void chaseBirds() override;

  void pet() override {}// nothing
  void sleep() override;
  void ignore() override;
  void feed() override;
  void water() override;

  string onomonopia() const override{
    vector <string> onomonopia{"meow", "meo", "mew", "nya", "mee"};
    int size = onomonopia.size();
    srand(time(0));
    int index = (rand() % size);
    return onomonopia.at(index);
  }
  void printActions() const override{
    vector <string> actions{"1. praise",  "2. reprimand", "3. chaseBirds", "4. ignore", "5. sleep", "6. feed", "7. water"}; 
    for(int i = 0; i < actions.size(); i++){
      cout << "•" << actions.at(i) << endl;
    }
  }
  void printPet() const override{
    //art provided by https://www.asciiart.eu/animals/
    cout << " \\    /\\" << endl;
    cout << "  )  ( ')" << endl;
    cout << " (  /  )" << endl;
    cout << "  \\(__)|" << endl;
  }

};

#endif 
