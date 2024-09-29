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
    }
    else {
        cout << "Pembagian tidak bisa dilakukan, bilangan kedua tidak boleh 0." << endl;
    }
}

// Array untuk angka satuan
string satuan[] = { "", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan" };

// Array untuk angka belasan
string belasan[] = { "Sepuluh", "Sebelas", "Dua Belas", "Tiga Belas", "Empat Belas", "Lima Belas", "Enam Belas", "Tujuh Belas", "Delapan Belas", "Sembilan Belas" };

// Array untuk angka puluhan
string puluhan[] = { "", "", "Dua Puluh", "Tiga Puluh", "Empat Puluh", "Lima Puluh", "Enam Puluh", "Tujuh Puluh", "Delapan Puluh", "Sembilan Puluh" };

// Fungsi untuk mengubah angka menjadi tulisan
string terbilang(int angka) {
    string hasil;

    if (angka == 0) {
        return "Nol";
    }
    else if (angka < 10) {
        return satuan[angka];
    }
    else if (angka < 20) {
        return belasan[angka - 10];
    }
    else {
        hasil = puluhan[angka / 10];
        if (angka % 10 != 0) {
            hasil += " " + satuan[angka % 10];
        }
        return hasil;
    }
}

void soalNomor2() {
    int angka;

    // Meminta input dari pengguna
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    // Mengecek apakah input berada dalam batas yang valid (0-100)
    if (angka >= 0 && angka <= 100) {
        // Menampilkan angka dalam bentuk tulisan
        cout << angka << " : " << terbilang(angka) << endl;
    }
    else {
        // Menampilkan pesan jika angka di luar batas
        cout << "Angka harus antara 0 dan 100." << endl;
    }
}

void soalNomor3() {
    int n;

    cout << "Input: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int s = n - i; s > 0; s--) {
            cout << "  "; 
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << "* ";

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    for (int s = 0; s < n; s++) {
        cout << "  ";
    }
    cout << "*" << endl;
}

int main() {
    //soalNomor1();
    //soalNomor2();
    soalNomor3();
	return 0;
}