#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    int nim;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

// Fungsi untuk memeriksa apakah queue kosong
bool isEmpty() {
    return front == nullptr;
}

// Fungsi untuk menambahkan mahasiswa ke dalam queue dengan prioritas berdasarkan NIM
void enqueueWithPriority(string nama, int nim) {
    Node* newNode = new Node();
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = nullptr;

    // Jika queue kosong atau NIM baru lebih kecil dari front, tambahkan di depan
    if (isEmpty() || nim < front->nim) {
        newNode->next = front;
        front = newNode;
        if (rear == nullptr) { // Jika queue awalnya kosong
            rear = newNode;
        }
    } else {
        // Cari posisi yang tepat untuk memasukkan node baru
        Node* current = front;
        while (current->next != nullptr && current->next->nim <= nim) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        if (newNode->next == nullptr) { // Jika node baru adalah elemen terakhir
            rear = newNode;
        }
    }
    cout << "Mahasiswa " << nama << " dengan NIM " << nim << " berhasil masuk antrian dengan prioritas." << endl;
}

// Fungsi untuk mengeluarkan mahasiswa dari antrian (dequeue)
void dequeue() {
    if (isEmpty()) {
        cout << "Antrian kosong." << endl;
    } else {
        Node* temp = front;
        front = front->next;
        cout << "Mahasiswa " << temp->nama << " dengan NIM " << temp->nim << " keluar dari antrian." << endl;
        delete temp;
        if (front == nullptr) { // Jika queue menjadi kosong setelah dequeue
            rear = nullptr;
        }
    }
}

// Fungsi untuk menampilkan semua data dalam antrian
void viewQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong." << endl;
    } else {
        Node* temp = front;
        cout << "Data antrian mahasiswa:" << endl;
        while (temp != nullptr) {
            cout << "Nama: " << temp->nama << ", NIM: " << temp->nim << endl;
            temp = temp->next;
        }
    }
}

// Fungsi utama
int main() {
    int choice;
    string nama;
    int nim;

    do {
        cout << "\nMenu Queue Mahasiswa:\n";
        cout << "1. Tambah Mahasiswa (Enqueue dengan Prioritas)\n";
        cout << "2. Hapus Mahasiswa (Dequeue)\n";
        cout << "3. Lihat Antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan Nama Mahasiswa: ";
                cin >> ws; // Untuk membersihkan buffer input
                getline(cin, nama);
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim;
                enqueueWithPriority(nama, nim);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                viewQueue();
                break;
            case 4:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (choice != 4);

    return 0;
}
