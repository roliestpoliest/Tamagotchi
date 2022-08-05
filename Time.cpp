#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

int Time::getHours(){
  return hours;
}
void Time::setHours(int _hours){
  hours = _hours;
}
int Time::getMinutes(){
  return minutes;
}
void Time::setMinutes(int _minutes){
  minutes = _minutes;
}
string Time::getTime(){
  string currTime;
  if(getMinutes() == 0){
    currTime = to_string(getHours()) + ":" + to_string(getMinutes()) + "0";
  }else{
    currTime = to_string(getHours()) + ":" + to_string(getMinutes());
  }
  cout << "The time is " << currTime << "." << endl;
  return currTime;
}