#include <iostream>
using namespace std;

int main() {
    int usia;

    cout << "Masukkan usia Anda: ";
    cin >> usia;

    if (usia >= 21) {
        cout << "Anda boleh masuk ke dalam wahana." << endl;
    } else {
        cout << "Maaf, Anda belum boleh masuk ke dalam wahana." << endl;
    }

    return 0;
}
