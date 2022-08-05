#include "Bird.h"
using namespace std;


Bird::Bird() : Pet(){
  setSpecies("Bird");
}

Bird::Bird(string _name, string _species, int _friendshipLevel, int _happinessLevel, int _energyLevel, int _hungerLevel, int _hydrationLevel){
  setName(_name);
  setSpecies(_species);
  setFriendshipLevel(_friendshipLevel);
  setHappinessLevel(_happinessLevel);
  setEnergyLevel(_energyLevel);
  setHungerLevel(_hungerLevel);
  setHydrationLevel(_hydrationLevel);
}

void Bird::fly(){
  int statChange;
  srand(time(0));
  
  
  statChange = (rand() % 5 + 1) + 5;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 7 + 1) + 5;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 3 + 1) + 5;
  cout << ">Energy decreased -" << statChange << endl;
  setEnergyLevel(getEnergyLevel() - statChange);
  
  statChange = (rand() % 5 + 1) + 5;
  cout << ">Hunger increased +" << statChange << endl;
  setHungerLevel(getHungerLevel() + statChange);

  statChange = (rand() % 5 + 1) + 5;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);
    cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Bird::sing(){
  int statChange;
  srand(time(0));


  
  statChange = (rand() % 10 + 1) + 1;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);


  statChange = (rand() % 7 + 1) + 5;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange); 

      cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Bird::pet(){
  int statChange;
  srand(time(0));


  
  statChange = (rand() % 10 + 1) + 1;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);


  statChange = (rand() % 7 + 1) + 5;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange); 

    cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Bird::sleep(){
  int statChange;
  srand(time(0));

  
  statChange = (rand() % 3 + 1) + 1;
  cout << ">Friendship increased +" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() + statChange);

  statChange = (rand() % 3 + 1) + 1;
  cout << ">Happiness increased +" << statChange << endl;
  setHappinessLevel(getHappinessLevel() + statChange);

  statChange = (rand() % 5 + 1) + 5;
  cout << ">Energy increased +" << statChange << endl;
  setEnergyLevel(getEnergyLevel() + statChange);
  
  statChange = (rand() % 3 + 1) + 1;
  cout << ">Hunger increased +" << statChange << endl;
  setHungerLevel(getHungerLevel() + statChange);

  statChange = (rand() % 3 + 1) + 1;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);

  cout << endl << getName() << " is sleeping." << endl;
  cout << getName() << ": \"Zzz\"" << endl;

  printPet();
}
void Bird::ignore(){
  int statChange;
  srand(time(0));
  
  statChange = (rand() % 5 + 1) + 5;
  cout << ">Friendship decreased -" << statChange << endl;
  setFriendshipLevel(getFriendshipLevel() - statChange);

  statChange = (rand() % 10 + 1) + 1;
  cout << ">Happiness decreased -" << statChange << endl;
  setHappinessLevel(getHappinessLevel() - statChange);

  statChange = (rand() % 3 + 1) + 1;
  cout << ">Energy decreased -" << statChange << endl;
  setEnergyLevel(getEnergyLevel() - statChange);
  
  statChange = (rand() % 3 + 1) + 1;
  cout << ">Hunger increased +" << statChange << endl;
  setHungerLevel(getHungerLevel() + statChange);

  statChange = (rand() % 3 + 1) + 1;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);

  cout << endl << getName() << " is upset." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Bird::feed(){
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
  
  statChange = (rand() % 10 + 1) + 5;
  cout << ">Hunger decreased -" << statChange << endl;
  setHungerLevel(getHungerLevel() - statChange);

  statChange = (rand() % 3 + 1) + 1;
  cout << ">Hydration decreased -" << statChange << endl;
  setHydrationLevel(getHydrationLevel() - statChange);

    cout << endl << getName() << " is eating." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}
void Bird::water(){
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


    cout << endl << getName() << " wants to speak." << endl;
  cout << getName() << ": \"" << onomonopia() << "\"" << endl;
  printPet();
}