#include <iostream>
using namespace std;

int tambah(int a, int b) { return a + b; }
int kurang(int a, int b) { return a - b; }
int kali(int a, int b) { return a * b; }
float bagi(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
        return 0;
    }
}

int main() {
    int x, y;
    cout << "Masukkan angka pertama: ";
    cin >> x;
    cout << "Masukkan angka kedua: ";
    cin >> y;

    cout << "Hasil Tambah = " << tambah(x, y) << endl;
    cout << "Hasil Kurang = " << kurang(x, y) << endl;
    cout << "Hasil Kali = " << kali(x, y) << endl;
    cout << "Hasil Bagi = " << bagi(x, y) << endl;

    return 0;
}
