
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string nama, nim;
    double pendapatan, tarif, pajak;
    int tanggungan;

    cout << "===== PROGRAM PAJAK PENGHASILAN =====" << endl;

    cout << "\nNama Anda : ";
    getline(cin, nama);

    cout << "NIM Anda  : ";
    getline(cin, nim);

    cout << "\n===== DATA PENDAPATAN =====" << endl;

    cout << "Pendapatan bulanan: Rp ";
    cin >> pendapatan;

    if (pendapatan < 0) {
        cout << "\nInput tidak valid!" << endl;
        return 0;
    }

    cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
    cin >> tanggungan;

    if (tanggungan != 0 && tanggungan != 1) {
        cout << "\nStatus tanggungan tidak valid!" << endl;
        return 0;
    }


    if (pendapatan < 5000000) {
        tarif = 0;
    } else if (pendapatan < 10000000) {
        tarif = 0.05;
    } else if (pendapatan < 20000000) {
        tarif = 0.10;
    } else {
        tarif = 0.15;
    }

 
    pajak = pendapatan * tarif;


    if (tanggungan == 1) {
        pajak = pajak - 100000;
    }

    if (pajak < 0) {
        pajak = 0;
    }

    cout << fixed << setprecision(0);

    cout << "\n===== HASIL PERHITUNGAN =====" << endl;
    cout << "Nama Anda       : " << nama << endl;
    cout << "NIM Anda        : " << nim << endl;
    cout << "Pendapatan      : Rp " << pendapatan << endl;
    cout << "Tarif pajak     : " << tarif * 100 << "%" << endl;
    cout << "Pajak akhir     : Rp " << pajak << endl;

    return 0;
}

