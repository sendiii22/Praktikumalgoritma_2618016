#include <iostream>
using namespace std;

int main() {
    float celsius;

    cout << "Masukkan suhu dalam Celsius : ";
    cin >> celsius;

    float fahrenheit = (celsius * 9.0 / 5.0) + 32;
    float reamur = celsius * 4.0 / 5.0;
    float kelvin = celsius + 273.15;

    cout << endl;
    cout << "Hasil konversi suhu:" << endl;

    cout << celsius << " derajat Celsius = "
         << fahrenheit << " derajat Fahrenheit" << endl;

    cout << celsius << " derajat Celsius = "
         << reamur << " derajat Reamur" << endl;

    cout << celsius << " derajat Celsius = "
         << kelvin << " Kelvin" << endl;

    return 0;
}
