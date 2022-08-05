#include "Cat.h"
using namespace std;


Cat::Cat() : Pet(){
  setSpecies("Cat");
}

Cat::Cat(string _name, string _species, int _friendshipLevel, int _happinessLevel, int _energyLevel, int _hungerLevel, int _hydrationLevel){
  setName(_name);
  setSpecies(_species);
  setFriendshipLevel(_friendshipLevel);
  setHappinessLevel(_happinessLevel);
  setEnergyLevel(_energyLevel);
  setHungerLevel(_hungerLevel);
  setHydrationLevel(_hydrationLevel);
}

void Cat::praise(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 5 + 1) + 1;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 5 + 1) + 1;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);
  
  cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Cat::reprimand(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 20 + 1) + 5;
  cout << ">Friendship decrease -" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() - statChange);

  statChange = (rand() % 20 + 1) + 5;
  cout << ">Happiness decreased -" << statChange << endl;
  setHappinessLevel(getHappinessLevel() - statChange);
  
  statChange = (rand() % 15 + 1) + 5;
  cout << ">Energy decreased -" << statChange << endl;
  setEnergyLevel(getEnergyLevel() - statChange);
  
  cout << endl << getName() << " does not want to talk to you." << endl;
  // cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Cat::chaseBirds(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 5 + 1) + 1;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 5 + 1) + 1;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 15 + 1) + 1;
  cout << ">Energy decreased -" << statChange << endl;
  setEnergyLevel(getEnergyLevel() - statChange);
  
  statChange = (rand() % 7 + 1) + 1;
  cout << ">Hunger increased +" << statChange << endl;
  setHungerLevel(getHungerLevel() + statChange);

  statChange = (rand() % 16 + 1) + 1;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);
  
  cout << endl << getName() << " is happy." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Cat::ignore(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 20 + 1) + 5;
  cout << ">Friendship decrease -" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() - statChange);

  statChange = (rand() % 20 + 1) + 5;
  cout << ">Happiness decreased -" << statChange << endl;
  setHappinessLevel(getHappinessLevel() - statChange);
  
  statChange = (rand() % 15 + 1) + 5;
  cout << ">Energy increased +" << statChange << endl;
  setEnergyLevel(getEnergyLevel() + statChange);

  statChange = (rand() % 7 + 1) + 5;
  cout << ">Hunger increased +" << statChange << endl;
  setHungerLevel(getHungerLevel() + statChange);

  statChange = (rand() % 17 + 1) + 5;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);
  
  cout << endl << getName() << " is ignoring you." << endl;
  printPet();
}
void Cat::sleep(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 5 + 1) + 1;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 7 + 1) + 1;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 3 + 1) + 1;
  cout << ">Energy increased +" << statChange << endl;
  setEnergyLevel(getEnergyLevel() + statChange);
  
  statChange = (rand() % 6 + 1) + 5;
  cout << ">Hunger increased +" << statChange << endl;
  setHungerLevel(getHungerLevel() + statChange);

  statChange = (rand() % 15 + 1) + 5;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);
  
  cout << endl << getName() << " is sleeping." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Cat::feed(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 5 + 1) + 1;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 4 + 1) + 1;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 15 + 1) + 3;
  cout << ">Energy increased +" << statChange << endl;
  setEnergyLevel(getEnergyLevel() + statChange);
  
  statChange = (rand() % 7 + 1) + 1;
  cout << ">Hunger increased +" << statChange << endl;
  setHungerLevel(getHungerLevel() + statChange);

  statChange = (rand() % 15 + 1) + 1;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);
  
  cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Cat::water(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 5 + 1) + 1;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 7 + 1) + 1;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 3 + 1) + 1;
  cout << ">Energy increased +" << statChange << endl;
  setEnergyLevel(getEnergyLevel() + statChange);
  
  statChange = (rand() % 15 + 1) + 1;
  cout << ">Hunger decreased -" << statChange << endl;
  setHungerLevel(getHungerLevel() - statChange);

  statChange = (rand() % 5 + 1) + 1;
  cout << ">Hydration increased +" << statChange << endl;
  setHydrationLevel(getHydrationLevel() + statChange);
  
  cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
