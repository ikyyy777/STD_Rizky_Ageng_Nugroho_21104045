#include "doublelist.h"

// Membuat list kosong
void createList(List &L) {
    L.first = NULL;
    L.last = NULL;
}

// Mengalokasikan memori untuk elemen baru
address alokasi(infotype x) {
    address P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
        P->prev = NULL;
    }
    return P;
}

// Mendekalokasi elemen
void dealokasi(address &P) {
    delete P;
    P = NULL;
}

// Mencetak semua elemen dalam list
void printInfo(const List &L) {
    address P = L.first;
    while (P != NULL) {
        std::cout << "Nopol: " << P->info.nopol 
                  << ", Warna: " << P->info.warna 
                  << ", Tahun Buat: " << P->info.thnBuat << std::endl;
        P = P->next;
    }
}

// Menambahkan elemen di akhir list
void insertLast(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

// Mencari elemen berdasarkan nomor polisi
address findElm(const List &L, std::string nopol) {
    address P = L.first;
    while (P != NULL && P->info.nopol != nopol) {
        P = P->next;
    }
    return P;
}

// Menghapus elemen pertama
void deleteFirst(List &L, address &P) {
    if (L.first != NULL) {
        P = L.first;
        if (L.first == L.last) {
            L.first = NULL;
            L.last = NULL;
        } else {
            L.first = L.first->next;
            L.first->prev = NULL;
        }
        dealokasi(P);
    }
}

// Menghapus elemen terakhir
void deleteLast(List &L, address &P) {
    if (L.last != NULL) {
        P = L.last;
        if (L.first == L.last) {
            L.first = NULL;
            L.last = NULL;
        } else {
            L.last = L.last->prev;
            L.last->next = NULL;
        }
        dealokasi(P);
    }
}

// Menghapus elemen setelah elemen tertentu
void deleteAfter(address Prec, address &P) {
    if (Prec != NULL && Prec->next != NULL) {
        P = Prec->next;
        Prec->next = P->next;
        if (P->next != NULL) {
            P->next->prev = Prec;
        } else {
            P->prev = NULL;
        }
        dealokasi(P);
    }
}
