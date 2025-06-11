#include <iostream>
using namespace std;

int main() {
    int umur;

    cout << "Masukkan umur kamu: ";
    cin >> umur;

    if (umur < 5) {
        cout << "Kamu tidak sesuai kriteria umur" << endl;
    } else if (umur <= 7) {
        cout << "Selamat kamu lolos seleksi umur" << endl;
    } else {
        cout << "Maaf, kamu melebihi batas umur yang diperbolehkan." << endl;
    }

    return 0;
}
