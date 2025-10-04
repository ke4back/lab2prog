#pragma once
#include <iostream>
#include <string>
using namespace std;

class ReviewActivity {
public:
    static const string reviewTemplates[5];
    string userReviewText;
    string sentReviews[10];
    int reviewCount = 0;

    string chooseTemplate(int index) {
        if (index >= 0 && index < 5)
            return reviewTemplates[index];
        return "";
    }

    void editReviewText(string text) {
        userReviewText = text;
    }

    void submitReview() {
        if (userReviewText != "" && reviewCount < 10) {
            sentReviews[reviewCount] = userReviewText;
            reviewCount++;
            cout << "����� ���������: " << userReviewText << endl;
            userReviewText = "";
        }
    }

    void showAllReviews() {
        cout << "��� ������:" << endl;
        for (int i = 0; i < reviewCount; i++)
            cout << "- " << sentReviews[i] << endl;
    }
};

const string ReviewActivity::reviewTemplates[5] = {
    "�������� ������!",
    "������� ���!",
    "�������� ������ �����.",
    "������� �����.",
    "����� �����."
};
