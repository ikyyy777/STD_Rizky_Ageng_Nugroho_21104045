#include <iostream>
using namespace std;

int main() {
    int a = 10;             
    double b = 20.5;       
    char c = 'Z';          

    // Menampilkan nilai dan alamat memori dari variabel a
    cout << "Nilai a: " << a << ", Alamat memori a: " << &a << endl;

    // Menampilkan nilai dan alamat memori dari variabel b
    cout << "Nilai b: " << b << ", Alamat memori b: " << &b << endl;

    // Menampilkan nilai dan alamat memori dari variabel c
    cout << "Nilai c: " << c << ", Alamat memori c: " << (void*)&c << endl; // Mengcast ke void* untuk menampilkan alamat

    return 0;
}
