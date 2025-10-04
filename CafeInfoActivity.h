#pragma once
#include <iostream>
#include <string>
using namespace std;

class CafeInfoActivity {
public:
    struct CafeDetails {
        string name;
        string address;
        int openHour;
        int closeHour;
        int capacity;
        string feature1;
        string feature2;
        string feature3;
    };

    static CafeDetails cafeDetails;
    string currentStatusText;

    void updateStatus(int currentHour) {
        if (currentHour >= cafeDetails.openHour && currentHour < cafeDetails.closeHour)
            currentStatusText = "Открыто";
        else
            currentStatusText = "Закрыто";
    }

    void showInfo() {
        cout << "Название: " << cafeDetails.name << endl;
        cout << "Адрес: " << cafeDetails.address << endl;
        cout << "Время работы: " << cafeDetails.openHour << ":00 - " << cafeDetails.closeHour << ":00" << endl;
        cout << "Вместимость: " << cafeDetails.capacity << " гостей" << endl;
        cout << "Особенности:\n- " << cafeDetails.feature1
            << "\n- " << cafeDetails.feature2
            << "\n- " << cafeDetails.feature3 << endl;
        cout << "Статус: " << currentStatusText << endl;
    }
};

CafeInfoActivity::CafeDetails CafeInfoActivity::cafeDetails = {
    "Кафе Чинар",
    "ул. Примерная, 12",
    9, 22, 50,
    "Wi-Fi", "Оплата картой", "До 50 гостей"
};
