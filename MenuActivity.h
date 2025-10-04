#pragma once
#include <iostream>
#include <string>
using namespace std;

class MenuActivity {
public:
    static const string menuItems[5];
    string dailySpecial;

    void showMenu() {
        cout << "Меню кафе:" << endl;
        for (int i = 0; i < 5; i++)
            cout << "- " << menuItems[i] << endl;
        cout << "Блюдо дня: " << dailySpecial << endl;
    }

    void setDailySpecial(string special) {
        dailySpecial = special;
        cout << "Новое блюдо дня установлено: " << dailySpecial << endl;
    }
};

const string MenuActivity::menuItems[5] = {
    "Борщ — 250 руб.",
    "Салат Цезарь — 300 руб.",
    "Паста Карбонара — 400 руб.",
    "Стейк — 700 руб.",
    "Чай — 100 руб."
};
