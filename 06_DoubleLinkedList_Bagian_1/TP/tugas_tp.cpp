#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

struct List {
    Node* first;
    Node* last;
};

// Inisialisasi list
void createList(List &L) {
    L.first = NULL;
    L.last = NULL;
}

// Alokasi node baru
Node* createNode(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Fungsi untuk menambahkan elemen di awal list
void insertFirst(List &L, int x) {
    Node* newNode = createNode(x);
    if (L.first == NULL) {
        L.first = L.last = newNode;
    } else {
        newNode->next = L.first;
        L.first->prev = newNode;
        L.first = newNode;
    }
}

// Fungsi untuk menambahkan elemen di akhir list
void insertLast(List &L, int x) {
    Node* newNode = createNode(x);
    if (L.first == NULL) {
        L.first = L.last = newNode;
    } else {
        newNode->prev = L.last;
        L.last->next = newNode;
        L.last = newNode;
    }
}

// Fungsi untuk menampilkan list dari depan ke belakang
void printForward(const List &L) {
    Node* temp = L.first;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}

// Fungsi untuk menampilkan list dari belakang ke depan
void printBackward(const List &L) {
    Node* temp = L.last;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->prev != NULL) cout << " <-> ";
        temp = temp->prev;
    }
    cout << endl;
}

// Fungsi untuk menghapus elemen pertama
void deleteFirst(List &L) {
    if (L.first != NULL) {
        Node* temp = L.first;
        if (L.first == L.last) {
            L.first = L.last = NULL;
        } else {
            L.first = L.first->next;
            L.first->prev = NULL;
        }
        delete temp;
    }
}

// Fungsi untuk menghapus elemen terakhir
void deleteLast(List &L) {
    if (L.last != NULL) {
        Node* temp = L.last;
        if (L.first == L.last) {
            L.first = L.last = NULL;
        } else {
            L.last = L.last->prev;
            L.last->next = NULL;
        }
        delete temp;
    }
}

int main() {
    List L;
    createList(L);

    // Soal 1: Menambahkan elemen di awal dan akhir
    int elemen1, elemen2, elemen3;
    cout << "Masukkan elemen pertama = "; cin >> elemen1;
    insertLast(L, elemen1);
    cout << "Masukkan elemen kedua di awal = "; cin >> elemen2;
    insertFirst(L, elemen2);
    cout << "Masukkan elemen ketiga di akhir = "; cin >> elemen3;
    insertLast(L, elemen3);

    cout << "DAFTAR ANGGOTA LIST: ";
    printForward(L);

    // Soal 2: Menghapus elemen di awal dan akhir
    cout << "\nMenghapus elemen pertama dan terakhir." << endl;
    deleteFirst(L);
    deleteLast(L);

    cout << "DAFTAR ANGGOTA LIST SETELAH PENGHAPUSAN: ";
    printForward(L);

    // Soal 3: Menampilkan elemen dari depan ke belakang dan sebaliknya
    cout << "\nMasukkan 4 elemen secara berurutan: ";
    for (int i = 1; i <= 4; i++) {
        int val;
        cout << "Elemen ke-" << i << " = ";
        cin >> val;
        insertLast(L, val);
    }

    cout << "\nDaftar elemen dari depan ke belakang: ";
    printForward(L);

    cout << "Daftar elemen dari belakang ke depan: ";
    printBackward(L);

    return 0;
}
