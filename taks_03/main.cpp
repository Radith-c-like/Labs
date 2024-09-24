// task_03

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int sqare(int n) {
	return n * n;
}

int main() {
  setlocale(LC_ALL, "rus");
  double x0, y0, r0;
  double x1, y1, r1;
  cout << "введите координаты центра первой окружности и ее радиус: ";
  cin >> x0 >> y0 >> r0;

  cout << "введите координаты центра второй окружности и ее радиус: ";
  cin >> x1 >> y1 >> r1;

  if (x0 == x1 && y0 == y1) {
	  if (r0 != r1) {
		  cout << "no points";
	  }
	  else {
		  cout << "inf points";
	  }
  }

  else {
	  double distanceBetweenCenter = sqrt(pow((x1 - x0), 2) + pow((y1 - y0), 2));
	  double sumOfRadius = r0 + r1;
	  if (distanceBetweenCenter > sumOfRadius || distanceBetweenCenter < abs(r1 - r0)) {
		  cout << "no points";
	  }
	  else {
		  double a = (pow(r0, 2) - pow(r1, 2) + pow(distanceBetweenCenter, 2)) / (2 * distanceBetweenCenter);
		  double h = sqrt(pow(r0, 2) - pow(a, 2));
		  double x3 = x0 + a / distanceBetweenCenter * (x1 - x0);
		  double y3 = y0 + a / distanceBetweenCenter * (y1 - y0);
		  double x4 = x3 + h / distanceBetweenCenter * (y1 - y0);
		  double y4 = y3 - h / distanceBetweenCenter * (x1 - x0);
		  double x5 = x3 - h / distanceBetweenCenter * (y1 - y0);
		  double y5 = y3 + h / distanceBetweenCenter * (x1 - x0);
		  cout << x4 << ' ' << y4 << '\n';
		  cout << x5 << ' ' << y5 << '\n';
	  }
  }
	
}