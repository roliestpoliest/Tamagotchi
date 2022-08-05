#include "Rabbit.h"
using namespace std;


Rabbit::Rabbit() : Pet(){
  setSpecies("Rabbit");
}

Rabbit::Rabbit(string _name, string _species, int _friendshipLevel, int _happinessLevel, int _energyLevel, int _hungerLevel, int _hydrationLevel){
  setName(_name);
  setSpecies(_species);
  setFriendshipLevel(_friendshipLevel);
  setHappinessLevel(_happinessLevel);
  setEnergyLevel(_energyLevel);
  setHungerLevel(_hungerLevel);
  setHydrationLevel(_hydrationLevel);
}
void Rabbit::hop(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 5 + 1) + 7;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 7 + 1) + 7;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 15 + 1) + 7;
  cout << ">Energy decreased -" << statChange << endl;
  setEnergyLevel(getEnergyLevel() - statChange);
  
  statChange = (rand() % 5 + 1) + 7;
  cout << ">Hunger increased +" << statChange << endl;
  setHungerLevel(getHungerLevel() + statChange);

  statChange = (rand() % 15 + 1) + 7;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);
  
  cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Rabbit::pickUp(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 7 + 1) + 7;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 7 + 1) + 7;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  
  cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Rabbit::pet(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 10 + 1) + 7;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 7 + 1) + 7;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 3 + 1) + 7;
  cout << ">Energy increased -" << statChange << endl;
  setEnergyLevel(getEnergyLevel() - statChange);
    
  cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Rabbit::ignore(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 51 + 1) + 5;
  cout << ">Friendship decreased -" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() - statChange);

  statChange = (rand() % 17 + 1) + 5;
  cout << ">Happiness decreased -" << statChange << endl;
  setHappinessLevel(getHappinessLevel() - statChange);

  statChange = (rand() % 13 + 1) + 7;
  cout << ">Energy increased +" << statChange << endl;
  setEnergyLevel(getEnergyLevel() + statChange);
    
  cout << endl << getName() << " wants your attention." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Rabbit::sleep(){
  int statChange;
  srand(time(0));
  
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 7 + 1) + 1;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 3 + 1) + 1;
  cout << ">Energy increased +" << statChange << endl;
  setEnergyLevel(getEnergyLevel() + statChange);
  
  statChange = (rand() % 20 + 1) + 5;
  cout << ">Hunger decreased -" << statChange << endl;
  setHungerLevel(getHungerLevel() - statChange);

  statChange = (rand() % 13 + 1) + 1;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);
    cout << endl << getName() << " is sleeping." << endl;
  cout << getName() << ": \"Zzzz.\"" << endl;
  printPet();
}
void Rabbit::feed(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 5 + 1) + 7;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 7 + 1) + 7;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 13 + 1) + 7;
  cout << ">Energy increased +" << statChange << endl;
  setEnergyLevel(getEnergyLevel() + statChange);
  
  statChange = (rand() % 5 + 1) + 7;
  cout << ">Hunger increased +" << statChange << endl;
  setHungerLevel(getHungerLevel() + statChange);

  statChange = (rand() % 15 + 1) + 7;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);
  
  cout << endl << getName() << " wants to eating." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Rabbit::water(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 5 + 1) + 5;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 7 + 1) + 1;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 3 + 1) + 1;
  cout << ">Energy increased +" << statChange << endl;
  setEnergyLevel(getEnergyLevel() + statChange);
  

  statChange = (rand() % 5 + 1) + 5;
  cout << ">Hydration increased +" << statChange << endl;
  setHydrationLevel(getHydrationLevel() + statChange);

    cout << endl << getName() << " is drinking." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}