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
    cout << "������� �������� ������ ������������\n";
    cin >> firstProgrammName;
    cout << "\n������� ����� ������ ������ ��������� � ������� HH:MM\n";
    cin >> firstTime;
    cout << "\n������� ����������������� ������ ��������� � �������\n";
    cin >> lenghFirstProgramm;
    minutesFirstProgrammBegin = timeToInt(firstTime);

    cout << "������� �������� ������ ������������\n";
    cin >> secondProgrammName;
    cout << "\n������� ����� ������ ������ ��������� � ������� HH:MM\n";
    cin >> secondTime;
    cout << "\n������� ����������������� ������ ��������� � �������\n";
    cin >> lenghSecondProgramm;
    minutesSecondProgrammBegin = timeToInt(secondTime);

    cout << "������� �������� ������� ������������\n";
    cin >> thirdProgrammName;
    cout << "\n������� ����� ������ ������� ��������� � ������� HH:MM\n";
    cin >> thirdTime;
    cout << "\n������� ����������������� ������� ��������� � �������\n";
    cin >> lenghThirdProgramm;
    minutesThirdProgrammBegin = timeToInt(thirdTime);
    
    cout << "������� ������� ����� � ������� HH MM: ";
    cin >> h >> m;
    int curentTime = h * 60 + m;

    if (curentTime >= minutesFirstProgrammBegin && curentTime <= minutesFirstProgrammBegin + lenghFirstProgramm) {
        cout << "�� �������� ������ ���������";
    }
    else if (curentTime >= minutesSecondProgrammBegin && curentTime <= minutesSecondProgrammBegin + lenghSecondProgramm) {
        cout << "�� �������� ������ ���������";
    }
    else if (curentTime >= minutesThirdProgrammBegin && curentTime <= minutesThirdProgrammBegin + lenghThirdProgramm) {
        cout << "�� �������� ������ ���������";
    }
    else {
        cout << "�� ������ �� ��������";
    }
}
