#include <iostream>
using namespace std;

// Struktur Node untuk linked list
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambah node di depan
void insertDepan(Node** head, int nilai) {
    Node* newNode = new Node();
    newNode->data = nilai;
    newNode->next = *head;
    *head = newNode;
}

// Fungsi untuk menambah node di belakang
void insertBelakang(Node** head, int nilai) {
    Node* newNode = new Node();
    newNode->data = nilai;
    newNode->next = nullptr;
    
    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Fungsi untuk menghapus node dengan nilai tertentu
void hapusNode(Node** head, int nilai) {
    if (*head == nullptr) {
        cout << "Linked list kosong, tidak ada yang bisa dihapus." << endl;
        return;
    }

    Node* temp = *head;
    Node* prev = nullptr;

    // Jika node yang akan dihapus adalah node pertama (head)
    if (temp != nullptr && temp->data == nilai) {
        *head = temp->next; // Pindahkan head ke node berikutnya
        delete temp; // Hapus node lama
        return;
    }

    // Cari node yang memiliki nilai yang sesuai
    while (temp != nullptr && temp->data != nilai) {
        prev = temp;
        temp = temp->next;
    }

    // Jika nilai tidak ditemukan
    if (temp == nullptr) {
        cout << "Node dengan nilai " << nilai << " tidak ditemukan." << endl;
        return;
    }

    // Hapus node
    prev->next = temp->next;
    delete temp;
}

// Fungsi untuk mencetak isi linked list
void cetakLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Contoh operasi sesuai input yang diberikan
    insertDepan(&head, 10);
    insertBelakang(&head, 20);
    insertDepan(&head, 5);
    
    // Hapus node dengan nilai tertentu
    hapusNode(&head, 10);

    // Cetak linked list setelah penghapusan
    cetakLinkedList(head);

    return 0;
}
