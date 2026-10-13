#include <iostream>
using namespace std;

int main() {
    float jariJari, tinggi;
    float pi = 3.14159;

    cout << "Masukkan jari-jari tabung : ";
    cin >> jariJari;

    cout << "Masukkan tinggi tabung : ";
    cin >> tinggi;

    float volume = pi * jariJari * jariJari * tinggi;

    cout << "Volume tabung adalah: " << volume << endl;

    return 0;
}
