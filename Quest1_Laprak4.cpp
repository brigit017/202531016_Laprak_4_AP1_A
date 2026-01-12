#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "==== FIBONACCI GENERATOR ====\n";
    cout << "1) n suku\n";
    cout << "2) sampai <= n\n";
    cout << "3) exit\n";
    cout << "pilih: ";
    cin >> pilihan;

    if (pilihan == 1) {
        int n;
        cout << "Masukkan n: ";
        cin >> n;

        if (n <= 0) {
            cout << "Input tidak valid!\n";
            return 0;
        }

        long long a = 0, b = 1;
        cout << endl;

        for (int i = 0; i < n; i++) {
            cout << a << " ";
            long long c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }

    else if (pilihan == 2) {
        int n;
        cout << "Masukkan n: ";
        cin >> n;

        if (n < 0) {
            cout << "Input tidak valid!\n";
            return 0;
        }

        long long a = 0, b = 1;
        cout << endl;

        while (a <= n) {
            cout << a << " ";
            long long c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }

    else if (pilihan == 3) {
        cout << "Program selesai.\n";
    }

    else {
        cout << "Pilihan tidak valid!\n";
    }

    return 0;
}

