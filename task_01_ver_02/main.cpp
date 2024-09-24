#include<iostream>;
#include<vector>;
#include<string>;

using std::cin;
using std::cout;

int timeToInt(std::string time) {
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
    setlocale(LC_ALL, "rus");
    int countOfTvProgram;
    std::string firstProgrammName, secondProgrammName, thirdProgrammName;
    int minutesFirstProgrammBegin, minutesSecondProgrammBegin, minutesThirdProgrammBegin;
    int lenghFirstProgramm, lenghSecondProgramm, lenghThirdProgramm;
    std::string firstTime, secondTime, thirdTime;
    int h, m;
    cout << "введите название первой телепередачи\n";
    cin >> firstProgrammName;
    cout << "\nвведите время начала первой программы в формате HH:MM\n";
    cin >> firstTime;
    cout << "\nвведите продолжительность первой программы в минутах\n";
    cin >> lenghFirstProgramm;
    minutesFirstProgrammBegin = timeToInt(firstTime);

    cout << "введите название второй телепередачи\n";
    cin >> secondProgrammName;
    cout << "\nвведите время начала второй программы в формате HH:MM\n";
    cin >> secondTime;
    cout << "\nвведите продолжительность второй программы в минутах\n";
    cin >> lenghSecondProgramm;
    minutesSecondProgrammBegin = timeToInt(secondTime);

    cout << "введите название третьей телепередачи\n";
    cin >> thirdProgrammName;
    cout << "\nвведите время начала третьей программы в формате HH:MM\n";
    cin >> thirdTime;
    cout << "\nвведите продолжительность третьей программы в минутах\n";
    cin >> lenghThirdProgramm;
    minutesThirdProgrammBegin = timeToInt(thirdTime);
    
    cout << "введите текущее время в формате HH MM: ";
    cin >> h >> m;
    int curentTime = h * 60 + m;

    if (curentTime >= minutesFirstProgrammBegin && curentTime <= minutesFirstProgrammBegin + lenghFirstProgramm) {
        cout << "Вы смотрите первую программу";
    }
    else if (curentTime >= minutesSecondProgrammBegin && curentTime <= minutesSecondProgrammBegin + lenghSecondProgramm) {
        cout << "вы смотрете вторую программу";
    }
    else if (curentTime >= minutesThirdProgrammBegin && curentTime <= minutesThirdProgrammBegin + lenghThirdProgramm) {
        cout << "вы смотрети третью программу";
    }
    else {
        cout << "вы ничего не смотрите";
    }
}
