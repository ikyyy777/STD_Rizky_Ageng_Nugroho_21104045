#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai maksimum
int cariMaksimum(int arr[], int ukuran) {
    int maks = arr[0];
    for (int i = 1; i < ukuran; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

// Fungsi untuk mencari nilai minimum
int cariMinimum(int arr[], int ukuran) {
    int min = arr[0];
    for (int i = 1; i < ukuran; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Fungsi untuk mencari rata-rata
double cariRataRata(int arr[], int ukuran) {
    int total = 0;
    for (int i = 0; i < ukuran; i++) {
        total += arr[i];
    }
    return static_cast<double>(total) / ukuran;
}

int main() {
    int ukuran, pilihan;

    // Meminta user untuk memasukkan ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> ukuran;

    // Membuat array dinamis
    int* arr = new int[ukuran];

    // Meminta user untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < ukuran; i++) {
        cout << "Elemen [" << i << "]: ";
        cin >> arr[i];
    }

    // Menu pilihan
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-Rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Nilai Maksimum: " << cariMaksimum(arr, ukuran) << endl;
            break;
        case 2:
            cout << "Nilai Minimum: " << cariMinimum(arr, ukuran) << endl;
            break;
        case 3:
            cout << "Nilai Rata-Rata: " << cariRataRata(arr, ukuran) << endl;
            break;
        case 4:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid, silakan pilih opsi yang benar.\n";
            break;
        }
    } while (pilihan != 4);

    delete[] arr;

    return 0;
}
