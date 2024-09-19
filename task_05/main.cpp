// task_05

#include <iostream>
#include<vector>
#include<string>;


using std::cin;
using std::cout;



int main() {
  setlocale(LC_ALL, "rus");
  std::vector<std::string> cucle_5 {"Зелёный", "Красный", "Желтый", "Белый", "Черный"};
  std::vector<std::string> cucle_12{"Крыса",    "Корова", "Тигр",  "Зайц",
                                    "Дракон",  "Змея",   "Лошадь", "Овца",
                                    "Обезьяна", "Курица", "Собака", "Свинья"}; 
  const int startYear = 2031;
  int year;
  cin >> year;
  
  year -= startYear;

  if (year > 0) {
    year %= 60;

    int number_of_5_cucle = year / 12;
    year %= 12;

    cout << cucle_5[number_of_5_cucle] << '\t' << cucle_12[year];
  } else {
    int number_of_5_cucle = year / 12;
    year %= 12;
    cout << cucle_5[4 + number_of_5_cucle] << '\t' << cucle_12[11 + year];
  }
}