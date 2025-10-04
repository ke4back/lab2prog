#pragma once
#include <iostream>
#include <string>
using namespace std;

class MenuActivity {
public:
    static const string menuItems[5];
    string dailySpecial;

    void showMenu() {
        cout << "���� ����:" << endl;
        for (int i = 0; i < 5; i++)
            cout << "- " << menuItems[i] << endl;
        cout << "����� ���: " << dailySpecial << endl;
    }

    void setDailySpecial(string special) {
        dailySpecial = special;
        cout << "����� ����� ��� �����������: " << dailySpecial << endl;
    }
};

const string MenuActivity::menuItems[5] = {
    "���� � 250 ���.",
    "����� ������ � 300 ���.",
    "����� ��������� � 400 ���.",
    "����� � 700 ���.",
    "��� � 100 ���."
};
