//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows, columns, depth;
//
//    // Meminta ukuran array dari pengguna
//    cout << "Masukkan jumlah baris: ";
//    cin >> rows;
//    cout << "Masukkan jumlah kolom: ";
//    cin >> columns;
//    cout << "Masukkan jumlah lapisan: ";
//    cin >> depth;
//
//    // Membuat array 3D dinamis menggunakan pointer
//    int*** array3D = new int** [rows];
//    for (int i = 0; i < rows; i++) {
//        array3D[i] = new int* [columns];
//        for (int j = 0; j < columns; j++) {
//            array3D[i][j] = new int[depth];
//        }
//    }
//
//    // Meminta pengguna untuk memasukkan elemen-elemen array
//    cout << "Masukkan elemen-elemen array:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            for (int k = 0; k < depth; k++) {
//                cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
//                cin >> array3D[i][j][k];
//            }
//        }
//    }
//
//    // Menampilkan array yang telah diinputkan
//    cout << "\nArray 3D yang diinputkan:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            for (int k = 0; k < depth; k++) {
//                cout << array3D[i][j][k] << " ";
//            }
//            cout << endl; // Baris berikutnya setelah kolom selesai
//        }
//        cout << endl; // Baris baru untuk lapisan baru
//    }
//
//    // Menghapus memori yang telah dialokasikan secara dinamis
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            delete[] array3D[i][j];
//        }
//        delete[] array3D[i];
//    }
//    delete[] array3D;
//
//    return 0;
//}
