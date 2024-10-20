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
    
    // Cetak linked list
    cetakLinkedList(head);

    return 0;
}
