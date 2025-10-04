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
            currentStatusText = "�������";
        else
            currentStatusText = "�������";
    }

    void showInfo() {
        cout << "��������: " << cafeDetails.name << endl;
        cout << "�����: " << cafeDetails.address << endl;
        cout << "����� ������: " << cafeDetails.openHour << ":00 - " << cafeDetails.closeHour << ":00" << endl;
        cout << "�����������: " << cafeDetails.capacity << " ������" << endl;
        cout << "�����������:\n- " << cafeDetails.feature1
            << "\n- " << cafeDetails.feature2
            << "\n- " << cafeDetails.feature3 << endl;
        cout << "������: " << currentStatusText << endl;
    }
};

CafeInfoActivity::CafeDetails CafeInfoActivity::cafeDetails = {
    "���� �����",
    "��. ���������, 12",
    9, 22, 50,
    "Wi-Fi", "������ ������", "�� 50 ������"
};
