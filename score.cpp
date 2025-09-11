#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score (0-100): ";
    cin >> score;

    if (score >= 95) {
        cout << "Grade A" << endl;
    }
    else if (score >= 85) {
        cout << "Grade B" << endl;
    }
    else if (score >=75) {
        cout << "Grade C" << endl;
    }
    else {
        cout << "Grade F" << endl;
    }

    return 0;
}