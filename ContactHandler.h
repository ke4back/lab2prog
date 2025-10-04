#pragma once
#include <iostream>
#include <string>
using namespace std;

class ContactHandler {
public:
    static const string contactNames[4];
    static const string contactLinks[4];
    string lastOpenedContact;

    void openContact(string name) {
        for (int i = 0; i < 4; i++) {
            if (contactNames[i] == name) {
                cout << "���������: " << contactNames[i]
                    << " -> " << contactLinks[i] << endl;
                lastOpenedContact = name;
                return;
            }
        }
        cout << "������� �� ������." << endl;
    }

    void showContacts() {
        cout << "��������:" << endl;
        for (int i = 0; i < 4; i++)
            cout << contactNames[i] << " : " << contactLinks[i] << endl;
    }
};

const string ContactHandler::contactNames[4] = {
    "WhatsApp", "�������", "2���", "������.�����"
};

const string ContactHandler::contactLinks[4] = {
    "https://wa.me/79991234567",
    "tel:+79991234567",
    "https://2gis.ru",
    "https://yandex.ru/maps"
};
