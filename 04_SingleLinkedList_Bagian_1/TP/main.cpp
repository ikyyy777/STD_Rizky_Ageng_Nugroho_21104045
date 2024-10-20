#include <iostream>
#include "list.h"
using namespace std;

#include <iostream>
#include "list.h"
using namespace std;

int main() {
    List L;
    address P;
    infotype x;

    createList(L);

    // Masukkan 10 digit NIM
    for (int i = 1; i <= 8; i++) {
        cout << "Digit " << i << " : ";
        cin >> x; // Input digit NIM
        P = allocate(x);
        insertLast(L, P); // Menggunakan insertLast untuk memasukkan di akhir
    }

    cout << "Isi list: ";
    printInfo(L);

    return 0;
}