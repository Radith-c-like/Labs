// task_06

#include <iostream>
#include<cmath>

using std::cin;
using std::cout;

int* solve(int day, int month, int year) {
  int lenghtOfMonth[12]{30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  
  if (day == 0) {
    month -= 1;
    if (month == 0) {
      year -= 1;
      month = 12;
      day = 31;
      cout << day << '\n';
    }
    else if (month == 2) {
      if (year % 100 == 0) {
        if (year % 400 == 0) {
          day = 29;
        } else {
          day = 28;
        }
      } else {
        if (year % 4 == 0) {
          day = 29;
        } else {
         day = 28;
        }
      }
    } else {
      day = lenghtOfMonth[month];
    }
  }
  cout << day << '\t' << month << '\t' << year << '\n';
  return 0;
}


int main() {
  int day, month, year;
  cin >> day >> month >> year;
  day -= 1;
  solve(day, month, year);
}