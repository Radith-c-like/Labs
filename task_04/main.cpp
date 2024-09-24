// task_04

#include <iostream>
using std::cin;
using std::cout;

int main() {
  double a1, b1;
  double a2, b2;
  cin >> a1 >> b1 >> a2 >> b2;

  if (a1 == a2) {
    cout << "parallel";
  } else if (-a1 == 1/a2) {
    cout << "ort";
  } else {
      double angle = (1 + a1 * a2) / sqrt((1 + a1 * a1) * (1 + a2 * a2));
      angle = acos(angle);
      cout << angle;
  }
}