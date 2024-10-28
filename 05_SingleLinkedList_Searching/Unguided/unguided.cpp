#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int NIM;
    string nama;
    Mahasiswa* next;
};

// Fungsi untuk menambahkan data mahasiswa ke dalam linked list
void tambahMahasiswa(Mahasiswa*& head, int NIM, string nama) {
    Mahasiswa* newNode = new Mahasiswa{NIM, nama, nullptr};
    if (!head) {
        head = newNode;
    } else {
        Mahasiswa* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
    cout << "Mahasiswa dengan NIM " << NIM << " berhasil ditambahkan." << endl;
}

// Fungsi untuk mencari mahasiswa berdasarkan NIM
void cariMahasiswa(Mahasiswa* head, int NIM) {
    Mahasiswa* current = head;
    while (current) {
        if (current->NIM == NIM) {
            cout << "Mahasiswa ditemukan: " << current->nama << endl;
            return;
        }
        current = current->next;
    }
    cout << "Mahasiswa dengan NIM " << NIM << " tidak ditemukan." << endl;
}

// Fungsi untuk menampilkan data mahasiswa dalam linked list
void tampilkanMahasiswa(Mahasiswa* head) {
    Mahasiswa* current = head;
    cout << "Daftar Mahasiswa:" << endl;
    while (current) {
        cout << "NIM: " << current->NIM << ", Nama: " << current->nama << endl;
        current = current->next;
    }
}

int main() {
    Mahasiswa* head = nullptr;
    int pilihan, NIM;
    string nama;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Cari Mahasiswa\n";
        cout << "3. Tampilkan Semua Mahasiswa\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan NIM: ";
                cin >> NIM;
                cout << "Masukkan Nama: ";
                cin.ignore();
                getline(cin, nama);
                tambahMahasiswa(head, NIM, nama);
                break;
            case 2:
                cout << "Masukkan NIM yang ingin dicari: ";
                cin >> NIM;
                cariMahasiswa(head, NIM);
                break;
            case 3:
                tampilkanMahasiswa(head);
                break;
            case 4:
                cout << "Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }
}
