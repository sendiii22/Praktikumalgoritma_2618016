
#include <iostream>
using namespace std;

int main() {
    string nama, makanan;
    int pilihan, jumlah;
    int harga = 0;
    int diskon = 0;
    int total;

    cout << "Masukkan nama pemesan: ";
    cin >> nama;

    cout << "\n=== DAFTAR MENU KANTIN ===" << endl;
    cout << "1. Soto          - Rp7000" << endl;
    cout << "2. Bakso         - Rp12000" << endl;
    cout << "3. Mie Ayam      - Rp10000" << endl;
    cout << "4. Es Teh        - Rp3000" << endl;

    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            makanan = "Soto";
            harga = 7000;
            break;

        case 2:
            makanan = "Bakso";
            harga = 12000;
            break;

        case 3:
            makanan = "Mie Ayam";
            harga = 10000;
            break;

        case 4:
            makanan = "Es Teh";
            harga = 3000;
            break;

        default:
            cout << "Menu tidak tersedia!" << endl;
            return 0;
    }

    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlah;

    total = harga * jumlah;

    if (jumlah >= 5) {
        diskon = total * 10 / 100;
    }

    total = total - diskon;

    cout << "\n=== STRUK PEMBAYARAN ===" << endl;
    cout << "Nama pemesan    : " << nama << endl;
    cout << "Nama makanan    : " << makanan << endl;
    cout << "Harga satuan    : Rp" << harga << endl;
    cout << "Jumlah pesanan  : " << jumlah << endl;
    cout << "Diskon 8%       : Rp" << diskon << endl;
    cout << "Total Pembayaran: Rp" << total << endl;

    return 0;
}
