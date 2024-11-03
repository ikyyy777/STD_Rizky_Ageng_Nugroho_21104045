#include <iostream>
#include "stack.h"
using namespace std;

// Prosedur untuk membuat stack kosong
void createStack(Stack &S) {
    S.Top = 0;
}

// Fungsi untuk mengecek apakah stack kosong
bool isEmpty(Stack S) {
    return S.Top == 0;
}

// Fungsi untuk mengecek apakah stack penuh
bool isFull(Stack S) {
    return S.Top == 15;
}

// Prosedur untuk menambahkan elemen ke dalam stack
void push(Stack &S, infotype x) {
    if (!isFull(S)) {
        S.Top++;
        S.info[S.Top] = x;
    }
}

// Fungsi untuk mengeluarkan elemen dari stack
int pop(Stack &S) {
    if (!isEmpty(S)) {
        infotype x = S.info[S.Top];
        S.Top--;
        return x;
    }
    return -1; // Stack kosong
}

// Prosedur untuk menampilkan isi stack
void printInfo(Stack S) {
    if (!isEmpty(S)) {
        for (int i = S.Top; i >= 1; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack kosong" << endl;
    }
}
