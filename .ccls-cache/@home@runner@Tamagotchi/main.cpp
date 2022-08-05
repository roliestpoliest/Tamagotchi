#include <iostream>
#include <sstream>
#include <fstream>
#include "Bird.h"
#include "Rabbit.h"
#include "Cat.h"
using namespace std;

//functions
void printTitle();
void printPetTypes();
bool loopFlag();
void saveCurrGame();
bool exitGame();

//global var
Pet *firstPet = nullptr;
string _name;
string _species;
int _day;
int _friendshipLevel;
int _happinessLevel;
int _energyLevel;
int _hungerLevel;
int _hydrationLevel;
int currDay = 1;
int _hours = 12;
int _minutes = 0;
Time currTime(_hours, _minutes);

int main() {
  Time oneHour(1, 0);
  Time thirtyMinutes(0, 30);
  string petName, _inputFile;
  int petType, saveFile, playerAction, openSave;

  printTitle();

  cout << "1. Load File" << endl;
  cout << "2. New File" << endl;
  cin >> openSave;
  if (openSave < 1 || openSave > 2){
    cout << "I did not understand that." << endl;
    cin >> openSave;
  }
  if(openSave == 1){
    //open save file
    cout << "Enter file name" << endl;
    cin >> _inputFile;
   ifstream inputFile(_inputFile);
   
    if (!inputFile.is_open()) {
      cout << "File not found" << endl;
      return 1;
    }
    inputFile >> _name;
    inputFile >> _species;
    inputFile >> _day;
    inputFile >> _friendshipLevel;
    inputFile >> _happinessLevel;
    inputFile >> _energyLevel;
    inputFile >> _hungerLevel;
    inputFile >> _hydrationLevel;
    inputFile >> _hours;
    inputFile >> _minutes;
    inputFile.close();
    
    currDay = _day;
    currTime.setHours(_hours);
    currTime.setMinutes(_minutes);
    if(_species == "Bird"){
      firstPet = new Bird(_name, _species, _friendshipLevel, _happinessLevel, _energyLevel, _hungerLevel, _hydrationLevel);
    }else if(_species == "Rabbit"){
      firstPet = new Rabbit(_name, _species, _friendshipLevel, _happinessLevel, _energyLevel, _hungerLevel, _hydrationLevel);
    }else if(_species == "Cat"){
      firstPet = new Cat(_name, _species, _friendshipLevel, _happinessLevel, _energyLevel, _hungerLevel, _hydrationLevel);
    }
  }else{
    //create new pet
    cout << "Welcome. Would you like to adpot a pet? (Please enter a number)" << endl;
    
    cout << "We have three to choose from." << endl;
    printPetTypes();
    cin >> petType;
    while (petType < 1 || petType > 3){
      cout << "I do not understand." << endl;
      printPetTypes();
    }
  
    switch(petType){
      case 1:
        firstPet = new Bird();
        cout << "You adopted a Bird!" << endl;
        firstPet->setRandomStats(50, 40);
        break;
      case 2:
        firstPet = new Rabbit();
        cout << "You adopted a Rabbit!" << endl;
        firstPet->setRandomStats(40, 30);
        break;
      case 3:
        firstPet = new Cat();
        cout << "You adopted a Cat!" << endl;
        firstPet->setRandomStats(30, 15);
        break;
    }
  
    cout << "What would you like to name your "<< firstPet->getSpecies() << "?" << endl;
    cin >> petName;
  
    firstPet->setName(petName);
    cout << "Your " << firstPet->getSpecies() << "'s name is " << firstPet->getName() << "." << endl;
    firstPet->printPet();
    cout << endl << endl;
  }

  while(currDay <= 3){
    cout << "Day " << currDay << endl;;
    cout << currTime.getTime() << endl;
    if(currDay == 1){
      cout << "Current Task: Bond with your pet for 3 days. Days end at 8 PM (20:00)." << endl;
    }
    firstPet->printStats();
    while(currTime.getHours() < 20){
      cout << "------------------------------" << endl;
      firstPet->printActions();
      cout << "•8. print current stats" << endl;
      cout << "•9. save game" << endl;
      cout << "What activity would you like to do with your " << firstPet->getSpecies() << "?" << endl;
      cin >> playerAction;
      if(firstPet->getSpecies() == "Rabbit"){
        while(playerAction < 1 || playerAction > 9){
          cout << "I did not understand that." << endl;
          cout << "What activity would you like to do with your " << firstPet->getSpecies() << "?" << endl;
          cin >> playerAction;
        }
        switch (playerAction){
          case 1:
            firstPet->hop();
            currTime = currTime + thirtyMinutes;
            currTime.getTime();
            break;
          case 2:
            firstPet->pickUp();
            currTime = currTime + thirtyMinutes; 
            currTime.getTime();
            break;
          case 3:
            firstPet->pet();
            currTime = currTime + thirtyMinutes; 
            currTime.getTime();
            break;
          case 4:
            firstPet->sleep();
            currTime = currTime + oneHour; 
            currTime.getTime();
            break;
          case 5:
            firstPet->ignore();
            currTime = currTime + oneHour; 
            currTime.getTime();
            break;
          case 6:
            firstPet->feed();
            currTime = currTime + thirtyMinutes; 
            currTime.getTime();
            break;
          case 7:
            firstPet->water();
            currTime = currTime + thirtyMinutes;
            currTime.getTime();
            break;
          case 8:
            firstPet->printStats();
            break;
          case 9:
            saveCurrGame();
            
            if(exitGame() == true){
              cout << "Game sequence terminated." << endl;
              return 2;
            }
            break;
        }
      }else if(firstPet->getSpecies() == "Bird"){
        while(playerAction < 1 || playerAction > 9){
          cout << "I did not understand that." << endl;
          cout << "What activity would you like to do with your " << firstPet->getSpecies() << "?" << endl;
          cin >> playerAction;
        }
        switch (playerAction){
          case 1:
            firstPet->fly();
            currTime = currTime + oneHour; 
            currTime.getTime();
            break;
          case 2:
            firstPet->sing();
            currTime = currTime + thirtyMinutes; 
            currTime.getTime();
            break;
          case 3:
            firstPet->pet();
            currTime = currTime + thirtyMinutes; 
            currTime.getTime();
            break;
          case 4:
            firstPet->sleep();
            currTime = currTime + oneHour; 
            currTime.getTime();
            break;
          case 5:
            firstPet->ignore();
            currTime = currTime + oneHour; 
            currTime.getTime();
            break;
          case 6:
            firstPet->feed();
            currTime = currTime + thirtyMinutes; 
            currTime.getTime();
            break;
          case 7:
            firstPet->water();
            currTime = currTime + thirtyMinutes;
            currTime.getTime();
            break;
          case 8:
            firstPet->printStats();
            break;
          case 9:
            saveCurrGame();
            if(exitGame() == true){
              cout << "Game sequence terminated." << endl;
              return 2;
            }
            break;
        }
      }else if (firstPet->getSpecies() == "Cat"){
        while(playerAction < 1 || playerAction > 10){
          cout << "I did not understand that." << endl;
          cout << "What activity would you like to do with your " << firstPet->getSpecies() << "?" << endl;
          cin >> playerAction;
        }
        switch (playerAction){
          case 1:
            firstPet->praise();
            currTime = currTime + oneHour; 
            currTime.getTime();
            break;
          case 2:
            firstPet->reprimand();
            currTime = currTime + thirtyMinutes; 
            currTime.getTime();
            break;
          case 4:
            firstPet->chaseBirds();
            currTime = currTime + oneHour; 
            currTime.getTime();
            break;
          case 5:
            firstPet->ignore();
            currTime = currTime + oneHour; 
            currTime.getTime();
            break;
          case 6:
            firstPet->sleep();
            currTime = currTime + thirtyMinutes; 
            currTime.getTime();
            break;
          case 7:
            firstPet->feed();
            currTime = currTime + thirtyMinutes;
            currTime.getTime();
            break;
          case 8:
            firstPet->water();
            currTime = currTime + thirtyMinutes;
            currTime.getTime();
            break;
          case 9:
            firstPet->printStats();
            break;
          case 10:
            saveCurrGame();
            if(exitGame() == true){
              cout << "Game sequence terminated." << endl;
              return 2;
            }
            break;
        }
      }
    }
    cout << firstPet->getName() << " is tired. It's time to end the day." << endl;
    loopFlag();
    if(loopFlag() == true){
      cout << firstPet->getName() << " has run away." << endl;
      cout << "Please don't neglect you pet." << endl;
      cout << "\nYou were with " << firstPet->getName() << " for " << currDay << " days." << endl;
      break;
    }
    cout << "End of Day " << currDay << endl;
    currDay++;
    currTime.setHours(12);
    currTime.setMinutes(0);
  }

  cout << "-> End Game." << endl;
  return 0;
}

void printTitle(){
  cout << " _______                                     _     _ " << endl;
cout << "|__   __|                                   | |   (_)" << endl;
cout << "   | | __ _ _ __ ___   __ _  __ _  ___   ___| |__  _ " << endl;
cout << "   | |/ _` | '_ ` _ \\ / _` |/ _` |/ _ \\ / __| '_ \\| |" << endl;
cout << "   | | (_| | | | | | | (_| | (_| | (_) | (__| | | | |" << endl;
cout << "   |_|\\__,_|_| |_| |_|\\__,_|\\__, |\\___/ \\___|_| |_|_|" << endl;
cout << "                             __/ |                   " << endl;
cout << "                            |___/                    " << endl;  
}

void printPetTypes(){
  cout << "1. Bird (the most friendly)" << endl;
  cout << "2. Rabbit (aloof and lazy)" << endl;
  cout << "3. Cat (timid and recluse)" << endl;
}

bool loopFlag(){
  bool flag = false;
  if(firstPet->getFriendshipLevel() == 0){
    cout << firstPet->getName() << " is unhappy."<< endl;
    cout << "FriendshipLevel has reached 0." << endl;
    flag = true;
  }
  if(firstPet->getHappinessLevel() == 0){
    cout << firstPet->getName() << " is unhappy."<< endl;
    cout << "HappinessLevel has reached 0." << endl;
    flag = true;
  }
  if(firstPet->getEnergyLevel() == 0){
    cout << firstPet->getName() << " is unhappy."<< endl;
    cout << "EnergyLevel has reached 0." << endl;
    flag = true;
  }
  if(firstPet->getHungerLevel() == 0){
    cout << firstPet->getName() << " is unhappy."<< endl;
    cout << "HungerLevel has reached 0." << endl;
    flag = true;
  }
  if(firstPet->getHydrationLevel() == 0){
    cout << firstPet->getName() << " is unhappy."<< endl;
    cout << "HydrationLevel has reached 0." << endl;
    flag = true;
  }
  return flag;
}

void saveCurrGame(){
  ofstream outputFile("save.txt");
  outputFile << firstPet->getName() << endl;
  outputFile << firstPet->getSpecies() << endl;
  outputFile << currDay << endl;
  outputFile << firstPet->getFriendshipLevel() << endl;
  outputFile << firstPet->getHappinessLevel() << endl;
  outputFile << firstPet->getEnergyLevel() << endl;
  outputFile << firstPet->getHungerLevel() << endl;
  outputFile << firstPet->getHydrationLevel() << endl;
  outputFile << currTime.getHours() << endl;
  outputFile << currTime.getMinutes() << endl;;
  outputFile.close();
  cout << "Your game has been saved." << endl;
  cout << "Would you like to exit the game? (Yes/No)" << endl;
}

bool exitGame(){
  string yn;
  cin >> yn;
  if(yn == "Yes" || yn == "yes" || yn == "Y" || yn == "y"){
    return true;
  }else{
    return false;
  }
}