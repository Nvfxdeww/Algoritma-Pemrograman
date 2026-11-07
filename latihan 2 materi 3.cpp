#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama;
    float keaktifan, tugas, ujian;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian;
    float nilaiAkhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "================================" << endl;

    cout << "Nama Siswa    : ";
    getline(cin, nama);

    cout << "Nilai Keaktifan : ";
    cin >> keaktifan;

    cout << "Nilai Tugas     : ";
    cin >> tugas;

    cout << "Nilai Ujian     : ";
    cin >> ujian;

    // Menghitung nilai berdasarkan persentase
    nilaiKeaktifan = keaktifan * 0.20;
    nilaiTugas = tugas * 0.30;
    nilaiUjian = ujian * 0.50;

    // Menghitung nilai akhir
    nilaiAkhir = nilaiKeaktifan + nilaiTugas + nilaiUjian;

    cout << "\n================================" << endl;
    cout << "LAYAR KELUARAN" << endl;
    cout << "================================" << endl;

    cout << "Siswa yang bernama " << nama << endl;
    cout << "Dengan nilai persentase yang dihasilkan:" << endl;

    cout << fixed << setprecision(2);

    cout << "Nilai Keaktifan * 20% : "
         << nilaiKeaktifan << endl;

    cout << "Nilai Tugas * 30%     : "
         << nilaiTugas << endl;

    cout << "Nilai Ujian * 50%     : "
         << nilaiUjian << endl;

    cout << "\nJadi siswa yang bernama " << nama
         << " memperoleh nilai akhir sebesar "
         << nilaiAkhir << endl;

    return 0;
}
