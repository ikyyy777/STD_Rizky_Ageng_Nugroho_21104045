#include <iostream>
using namespace std;

// Fungsi untuk menampilkan array 2D
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukarkan isi dua array 2D pada posisi tertentu
void tukarIsiArray(int arr1[3][3], int arr2[3][3], int row, int col) {
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

// Fungsi untuk menukarkan isi dari variabel yang ditunjuk oleh dua buah pointer
void tukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Deklarasi dua buah array 2D integer berukuran 3x3
    int array1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int array2[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };

    // Deklarasi dua pointer integer
    int a = 10, b = 20;
    int* ptr1 = &a;
    int* ptr2 = &b;

    // Menampilkan isi array sebelum pertukaran
    cout << "Array 1 sebelum ditukar:\n";
    tampilArray(array1);
    cout << "Array 2 sebelum ditukar:\n";
    tampilArray(array2);

    // Menukar isi array1 dan array2 pada posisi (1,1)
    tukarIsiArray(array1, array2, 1, 1);

    // Menampilkan isi array setelah pertukaran
    cout << "\nArray 1 setelah ditukar pada posisi (1,1):\n";
    tampilArray(array1);
    cout << "Array 2 setelah ditukar pada posisi (1,1):\n";
    tampilArray(array2);

    // Menampilkan nilai variabel yang ditunjuk oleh pointer sebelum pertukaran
    cout << "\nNilai a sebelum ditukar: " << a << endl;
    cout << "Nilai b sebelum ditukar: " << b << endl;

    // Menukar nilai yang ditunjuk oleh ptr1 dan ptr2
    tukarPointer(ptr1, ptr2);

    // Menampilkan nilai variabel yang ditunjuk oleh pointer setelah pertukaran
    cout << "\nNilai a setelah ditukar: " << a << endl;
    cout << "Nilai b setelah ditukar: " << b << endl;

    return 0;
}
