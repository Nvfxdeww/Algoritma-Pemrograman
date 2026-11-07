#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "PROGRAM MENENTUKAN NILAI MAHASISWA" << endl;
    cout << "==================================" << endl;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 0 && nilai <= 100) {
        if (nilai >= 80) {
            cout << "Nilai A - Sangat Baik" << endl;
        } 
        else if (nilai >= 70) {
            cout << "Nilai B - Baik" << endl;
        } 
        else if (nilai >= 60) {
            cout << "Nilai C - Cukup" << endl;
        } 
        else if (nilai >= 50) {
            cout << "Nilai D - Kurang" << endl;
        } 
        else {
            cout << "Nilai E - Tidak Lulus" << endl;
        }
    } 
    else {
        cout << "Nilai tidak valid!" << endl;
    }

    return 0;
}