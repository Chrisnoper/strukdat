#include <iostream>
using namespace std;
int main() {
    int arr[15];
    for (int i = 0; i < 15; i++) {
        arr[i] = i + 1;
    }
    cout << "HASIL = ";
    for (int i = 0; i < 15; i++) {
        if (arr[i] < 5) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
