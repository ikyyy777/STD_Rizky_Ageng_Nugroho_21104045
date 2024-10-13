#include <iostream>
using namespace std;

int main() {
    int var = 42;              
    int* ptr = &var;          

    // Menampilkan nilai dari variabel var
    cout << "Nilai var: " << var << endl;

    // Menampilkan alamat memori dari variabel var
    cout << "Alamat memori var: " << &var << endl;

    // Menampilkan nilai yang tersimpan di alamat yang ditunjuk oleh pointer ptr
    cout << "Nilai yang ditunjuk oleh pointer ptr: " << *ptr << endl;

    return 0;
}
