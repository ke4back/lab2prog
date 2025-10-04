#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

// Подключаем все классы (можно представить, что они в отдельных файлах)
#include "ReviewActivity.h"
#include "CafeInfoActivity.h"
#include "ContactHandler.h"
#include "ReservationActivity.h"
#include "MenuActivity.h"

int main() {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "=== Демонстрация классов кафе ===" << endl << endl;

    cout << "--- ReviewActivity ---" << endl;
    ReviewActivity review;
    cout << "Выбран шаблон: " << review.chooseTemplate(1) << endl;
    review.editReviewText("Очень понравилось обслуживание!");
    review.submitReview();
    review.showAllReviews();
    cout << endl;

    cout << "--- CafeInfoActivity ---" << endl;
    CafeInfoActivity cafe;
    cafe.updateStatus(15);  // текущее время — 15:00
    cafe.showInfo();
    cout << endl;

    cout << "--- ContactHandler ---" << endl;
    ContactHandler contact;
    contact.showContacts();
    contact.openContact("WhatsApp");
    cout << "Последний контакт: " << contact.lastOpenedContact << endl;
    cout << endl;

    cout << "--- ReservationActivity ---" << endl;
    ReservationActivity reservation;
    reservation.showSlots();
    reservation.selectReservation("2025-10-05", "18:00", 4, "День рождения");
    reservation.sendReservation();
    cout << endl;

    cout << "--- MenuActivity ---" << endl;
    MenuActivity menu;
    menu.setDailySpecial("Суп дня: Томатный крем-суп");
    menu.showMenu();
    cout << endl;

    cout << "=== Конец демонстрации ===" << endl;
    return 0;
}
