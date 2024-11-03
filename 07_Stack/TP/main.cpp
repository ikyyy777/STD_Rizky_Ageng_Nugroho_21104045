#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S;
    createStack(S);

    // Isi stack sesuai digit terakhir NIM MOD 4 sisa 0
    char data[] = {'I', 'F', 'L', 'A', 'B', 'J', 'A', 'Y', 'A'};
    int dataSize = sizeof(data) / sizeof(data[0]);

    // Menambahkan elemen ke dalam stack
    for (int i = 0; i < dataSize; i++) {
        push(S, data[i]);
    }

    cout << "Isi stack awal:" << endl;
    printInfo(S);

    // Melakukan pop 4 kali
    for (int i = 0; i < 4; i++) {
        pop(S);
    }

    cout << "Isi stack setelah pop:" << endl;
    printInfo(S);

    return 0;
}
