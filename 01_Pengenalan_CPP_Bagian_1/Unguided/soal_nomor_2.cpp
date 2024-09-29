#include <iostream>
using namespace std;

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
    } else if (angka < 10) {
        return satuan[angka];
    } else if (angka < 20) {
        return belasan[angka - 10];
    } else {
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
    } else {
        // Menampilkan pesan jika angka di luar batas
        cout << "Angka harus antara 0 dan 100." << endl;
    }
}

int main() {
    soalNomor2();
    return 0;
}
