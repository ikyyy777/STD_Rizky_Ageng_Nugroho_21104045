#include "singlelist.h"

void createList(List &L) {
    L.first = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = NULL;
}

void printInfo(const List &L) {
    address P = L.first;
    while (P != NULL) {
        std::cout << P->info << " ";
        P = P->next;
    }
    std::cout << std::endl;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

address findElm(const List &L, infotype x) {
    address P = L.first;
    while (P != NULL && P->info != x) {
        P = P->next;
    }
    return P;
}

int sumInfo(const List &L) {
    int sum = 0;
    address P = L.first;
    while (P != NULL) {
        sum += P->info;
        P = P->next;
    }
    return sum;
}
