#include<iostream>;
#include<vector>;
#include<string>;

using std::cin;
using std::cout;

int TimeToint(std::string time) {
  std::string hourse;
  std::string minutes;
  int iTime;
  int pos = 0;
  while (time[pos] != ':') {
    hourse.push_back(time[pos]);
    pos++;
  }
  iTime = std::stoi(hourse) * 60;
  pos++;
  while (pos != time.size()) {
    minutes.push_back(time[pos]);
    pos++;
  }
  iTime += std::stoi(minutes);
  return iTime;
}



int main() {
  int countOfTvProgram;
  int h, m;
  cin >> countOfTvProgram;
  std::vector<std::string> namesOfProgram(countOfTvProgram);
  std::vector<int> beginTimes(countOfTvProgram);
  std::vector<int> lenghesOfProgram(countOfTvProgram);

  for (int program = 0; program != countOfTvProgram; program++) {
    std::string nameOfProgram;
    std::string beginTime;
    int iBeginTime;
    int lengh;
    cin >> nameOfProgram >> beginTime >> lengh;
    namesOfProgram[program] = nameOfProgram;
    iBeginTime = ::TimeToint(beginTime);
    beginTimes[program] = iBeginTime;
    lenghesOfProgram[program] = lengh;
  }

  cin >> h >> m;
  int curentTime = h * 60 + m;
  for (int i = 0; i != countOfTvProgram; i++) {
    if (curentTime >= beginTimes[i] &&
        curentTime <= beginTimes[i] + lenghesOfProgram[i]) {
      cout << namesOfProgram[i];
      break;
    }
  }

}
