#pragma once
#include <iostream>
#include <string>
using namespace std;

class ReservationActivity {
public:
    static const string availableTimeSlots[6];

    struct Reservation {
        string date;
        string time;
        int guests;
        string type;
    };

    Reservation selectedReservation;

    void showSlots() {
        cout << "��������� �����:" << endl;
        for (int i = 0; i < 6; i++)
            cout << "- " << availableTimeSlots[i] << endl;
    }

    void selectReservation(string date, string time, int guests, string type) {
        selectedReservation.date = date;
        selectedReservation.time = time;
        selectedReservation.guests = guests;
        selectedReservation.type = type;
        cout << "����� �������: " << date << " " << time << " (" << type << ")" << endl;
    }

    void sendReservation() {
        cout << "����� ����������: "
            << selectedReservation.date << " " << selectedReservation.time
            << " �� " << selectedReservation.guests
            << " ������ (" << selectedReservation.type << ")" << endl;
    }
};

const string ReservationActivity::availableTimeSlots[6] = {
    "12:00", "14:00", "16:00", "18:00", "20:00", "22:00"
};
