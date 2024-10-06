//#include <iostream>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//int main() {
//    string input;
//    vector<int> data_array, genap, ganjil;
//
//    // Meminta input dari user
//    cout << "Masukkan deret angka (pisahkan dengan spasi): ";
//    getline(cin, input);
//
//    // Mengubah input menjadi vector integer
//    stringstream ss(input);
//    int num;
//    while (ss >> num) {
//        data_array.push_back(num);
//        if (num % 2 == 0) {
//            genap.push_back(num);
//        }
//        else {
//            ganjil.push_back(num);
//        }
//    }
//
//    // Menampilkan hasil
//    cout << "Data Array  : ";
//    for (int n : data_array) {
//        cout << n << " ";
//    }
//    cout << endl;
//
//    cout << "Nomor Genap : ";
//    for (int n : genap) {
//        cout << n << ", ";
//    }
//    cout << endl;
//
//    cout << "Nomor Ganjil: ";
//    for (int n : ganjil) {
//        cout << n << ", ";
//    }
//    cout << endl;
//
//    return 0;
//}
