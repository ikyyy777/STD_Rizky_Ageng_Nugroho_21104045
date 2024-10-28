#include "doublelist.h"

int main() {
    List L;
    createList(L);

    infotype kendaraan1 = {"D001", "Merah", 2018};
    infotype kendaraan2 = {"D002", "Biru", 2020};
    infotype kendaraan3 = {"D003", "Hitam", 2017};
    infotype kendaraan4 = {"D004", "Putih", 2019};

    address P1 = alokasi(kendaraan1);
    address P2 = alokasi(kendaraan2);
    address P3 = alokasi(kendaraan3);
    address P4 = alokasi(kendaraan4);

    insertLast(L, P1);
    insertLast(L, P2);
    insertLast(L, P3);
    insertLast(L, P4);

    std::cout << "Isi List Kendaraan:" << std::endl;
    printInfo(L);

    std::cout << "\nMencari kendaraan dengan Nopol D001:" << std::endl;
    address found = findElm(L, "D001");
    if (found != NULL) {
        std::cout << "Kendaraan ditemukan - Nopol: " << found->info.nopol 
                  << ", Warna: " << found->info.warna 
                  << ", Tahun Buat: " << found->info.thnBuat << std::endl;
    } else {
        std::cout << "Kendaraan tidak ditemukan." << std::endl;
    }

    std::cout << "\nMenghapus kendaraan dengan Nopol D003:" << std::endl;
    address del;
    found = findElm(L, "D003");
    if (found != NULL) {
        deleteAfter(found->prev, del);
    }
    printInfo(L);

    return 0;
}
