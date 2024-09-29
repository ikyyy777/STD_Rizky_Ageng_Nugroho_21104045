#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    // Kode Pertama
    cout << "saya lagi belajar c++ nih!" << endl;

    // Kode Kedua
    int inp;
    cout << "Masukkan nilai: ";
    cin >> inp;
    cout << "nilai = " << inp << endl;

    // Kode Ketiga
    int W, X, Y;
    float Z;
    X = 7; Y = 3; W = 1;
    Z = (X + Y) / (Y + W);
    cout << "Nilai z = " << Z << endl;

    // Kode Keempat
    double tot_pembelian, diskon;
    cout << "Total pembelian: Rp";
    cin >> tot_pembelian;
    diskon = 0;
    if (tot_pembelian >= 100000)
        diskon = 0.05 * tot_pembelian;
    else
        diskon = 0;
    cout << "Besar diskon = Rp" << diskon << endl;

    // Kode Kelima
    int i = 0;
    int jum;
    cout << "Masukkan jumlah baris: ";
    cin >> jum;
    do {
        cout << "Baris ke-" << i + 1 << endl;
        i++;
    } while (i < jum);
    
    getch();
    return 0;
}
