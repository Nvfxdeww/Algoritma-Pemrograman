#include <iostream>
using namespace std;

int main() {
    int hari;

    cout << "PROGRAM MENAMPILKAN HARI" << endl;
    cout << "========================" << endl;
    cout << "Masukkan angka (1-7): ";
    cin >> hari;

    switch (hari) {
        case 1:
            cout << "MONDAY" << endl;
            break;
        case 2:
            cout << "TEUSDAY" << endl;
            break;
        case 3:
            cout << "WEDNESDAY" << endl;
            break;
        case 4:
            cout << "THURSDAY" << endl;
            break;
        case 5:
            cout << "FRIDAY" << endl;
            break;
        case 6:
            cout << "SATURDAY" << endl;
            break;
        case 7:
            cout << "SUNDAY" << endl;
            break;
        default:
            cout << "Angka tidak valid!" << endl;
    }

    return 0;
}