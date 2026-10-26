#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai;

    cout << "Input nama mahasiswa: ";
    cin >> nama;

    cout << "Input NIM mahasiswa: ";
    cin >> nim;

    cout << "Input nilai mahasiswa (0-100): ";
    cin >> nilai;

    if (nilai >= 0 && nilai <= 100) {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;

        switch (nilai / 10) {
            case 10:
            case 9:
                cout << "Grade: A";
                break;

            case 8:
                cout << "Grade: B";
                break;

            case 7:
                cout << "Grade: C";
                break;

            case 6:
                cout << "Grade: D";
                break;

            default:
                cout << "Grade: E";
                break;
        }
    } else {
        cout << "Nilai yang dimasukkan tidak valid!";
    }

    return 0;
}
















