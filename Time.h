#include <iostream>
#include <string>
using namespace std;

class Time{
public:
  Time() : hours(0), minutes(0){}
  Time(int _hours, int _minutes) : hours(_hours), minutes(_minutes){}

  int getHours();
  void setHours(int _hours);
  int getMinutes();
  void setMinutes(int _minutes);
  string getTime();

  Time operator+(Time rhs){
    Time lhs;
    lhs.hours = hours + rhs.hours;
    if((minutes + rhs.minutes) >= 60){
      lhs.hours++;
      lhs.minutes = minutes + rhs.minutes - 60;
    }else{
      lhs.minutes = minutes + rhs.minutes;
    }
    if(lhs.hours >= 24){
      lhs.hours = lhs.hours - 24;
    }
    return lhs;
  }

private:
  int hours;
  int minutes;
};