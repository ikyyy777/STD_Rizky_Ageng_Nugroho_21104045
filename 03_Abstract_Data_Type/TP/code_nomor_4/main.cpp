#include <iostream>
#include "kerucut.h"

using namespace std;

int main() {
    double jariJari, tinggi;

    cout << "Masukkan jari-jari kerucut: ";
    cin >> jariJari;
    cout << "Masukkan tinggi kerucut: ";
    cin >> tinggi;

    // Membuat objek kerucut
    Kerucut k(jariJari, tinggi);

    // Menghitung dan menampilkan volume dan luas permukaan kerucut
    cout << "Volume kerucut: " << k.hitungVolume() << endl;
    cout << "Luas permukaan kerucut: " << k.hitungLuasPermukaan() << endl;

    return 0;
}
