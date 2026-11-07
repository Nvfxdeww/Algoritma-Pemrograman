#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
    string npm, nama;
    float tugas1, tugas2, tugas3, ratarata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "==============================" << endl;

    cout << "NPM : ";
    getline(cin, npm);

    cout << "Nama : ";
    getline(cin, nama);

    cout << "Nilai Tugas I : ";
    cin >> tugas1;

    cout << "Nilai Tugas II : ";
    cin >> tugas2;

    cout << "Nilai Tugas III : "; 
    cin >> tugas3;

    ratarata = (tugas1 + tugas2 + tugas3) / 3;

    cout << "\n================================" << endl;
    cout << "LAYAR KELUARAN" << endl;
    cout << "================================" << endl;

    cout << "NPM " << npm
         << " Siswa yang bernama " << nama << endl;

    cout << fixed << setprecision(2);
    cout << "Memperoleh nilai rata-rata "
         << ratarata
         << " dari hasil tugas yang diikutinya."
         << endl;

    return 0;
}
