#include <iostream>
using namespace std;

void soalNomor1() {
    // Deklarasi variabel untuk menyimpan dua bilangan float
    float bil1, bil2;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    // Melakukan operasi aritmatika
    cout << "Hasil penjumlahan: " << bil1 + bil2 << endl;
    cout << "Hasil pengurangan: " << bil1 - bil2 << endl;
    cout << "Hasil perkalian: " << bil1 * bil2 << endl;

    // Memastikan bilangan kedua tidak 0 sebelum melakukan pembagian
    if (bil2 != 0) {
        cout << "Hasil pembagian: " << bil1 / bil2 << endl;
    } else {
        cout << "Pembagian tidak bisa dilakukan, bilangan kedua tidak boleh 0." << endl;
    }
}

int main() {
    soalNomor1();
    return 0;
}
