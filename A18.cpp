#include <iostream>
using namespace std;

int main() {

    int number;
    cin >> number;

    if (number == 1) {
        cout << "I" << endl;
    } else if (number == 2) {
        cout << "II" << endl;
    } else if (number == 3) {
        cout << "III" << endl;
    } else if (number == 4) {
        cout << "IV" << endl;
    } else if (number == 5) {
        cout << "V" << endl;
    } else if (number == 6) {
        cout << "VI" << endl;
    } else if (number == 7) {
        cout << "VII" << endl;
    } else if (number == 8) {
        cout << "VIII" << endl;
    } else if (number == 9) {
        cout << "IX" << endl;
    } else if (number == 0 || number > 9) {
        cout << "Error : Out of range" << endl;
    } else if (number < 0) {
        cout << "Error : Please input positive number" << endl;
    }

    return 0;

}