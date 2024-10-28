#include "singlelist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    createList(L);
    P1 = alokasi(2);
    insertFirst(L, P1);
    P2 = alokasi(0);
    insertFirst(L, P2);
    P3 = alokasi(8);
    insertFirst(L, P3);
    P4 = alokasi(12);
    insertFirst(L, P4);
    P5 = alokasi(9);
    insertFirst(L, P5);

    std::cout << "Isi List: ";
    printInfo(L);

    int searchValue = 8;
    address found = findElm(L, searchValue);
    if (found != NULL) {
        std::cout << "Elemen dengan info " << searchValue << " ditemukan." << std::endl;
    } else {
        std::cout << "Elemen dengan info " << searchValue << " tidak ditemukan." << std::endl;
    }

    int totalSum = sumInfo(L);
    std::cout << "Total info elemen: " << totalSum << std::endl;

    return 0;
}
