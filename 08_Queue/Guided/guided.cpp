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

bool isEmpty() {
    return front == nullptr;
}

void enqueue(string nama, int nim) {
    Node* newNode = new Node();
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = nullptr;

    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Mahasiswa " << nama << " dengan NIM " << nim << " berhasil masuk antrian." << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Antrian kosong." << endl;
    } else {
        Node* temp = front;
        front = front->next;
        cout << "Mahasiswa " << temp->nama << " dengan NIM " << temp->nim << " keluar dari antrian." << endl;
        delete temp;
    }
}

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

void enqueueWithPriority(string nama, int nim) {
    Node* newNode = new Node();
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = nullptr;

    if (isEmpty() || nim < front->nim) {
        newNode->next = front;
        front = newNode;
        if (rear == nullptr) {
            rear = newNode;
        }
    } else {
        Node* current = front;
        while (current->next != nullptr && current->next->nim <= nim) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        if (newNode->next == nullptr) {
            rear = newNode;
        }
    }
    cout << "Mahasiswa " << nama << " dengan NIM " << nim << " berhasil masuk antrian dengan prioritas." << endl;
}

int main() {
    enqueueWithPriority("Rizky", 21104045);
    enqueueWithPriority("Ageng", 21103030);
    enqueueWithPriority("Nugroho", 21105010);

    cout << "\nAntrian saat ini:\n";
    viewQueue();

    cout << "\nMenghapus antrian:\n";
    dequeue();
    viewQueue();

    return 0;
}
