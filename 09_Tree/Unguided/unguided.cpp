#include <iostream>
#include <queue>
using namespace std;

struct Pohon {
    char data;
    Pohon *left, *right, *parent;
};
Pohon *root, *baru;

// Inisialisasi
void init() { root = NULL; }

// Buat Node Baru
void buatNode(char data) {
    if (!root) {
        root = new Pohon{data, NULL, NULL, NULL};
        cout << "Node " << data << " berhasil dibuat menjadi root.\n";
    } else {
        cout << "Pohon sudah ada!\n";
    }
}

// Tambah Kiri
Pohon *insertLeft(char data, Pohon *node) {
    if (!node) return NULL;
    if (node->left) {
        cout << "Node " << node->data << " sudah memiliki anak kiri!\n";
        return NULL;
    }
    baru = new Pohon{data, NULL, NULL, node};
    node->left = baru;
    cout << "Node " << data << " berhasil ditambahkan ke kiri " << node->data << ".\n";
    return baru;
}

// Tambah Kanan
Pohon *insertRight(char data, Pohon *node) {
    if (!node) return NULL;
    if (node->right) {
        cout << "Node " << node->data << " sudah memiliki anak kanan!\n";
        return NULL;
    }
    baru = new Pohon{data, NULL, NULL, node};
    node->right = baru;
    cout << "Node " << data << " berhasil ditambahkan ke kanan " << node->data << ".\n";
    return baru;
}

// Menampilkan Child dan Descendant
void tampilkanChild(Pohon *node) {
    if (!node) {
        cout << "Node tidak ditemukan.\n";
        return;
    }
    cout << "Node " << node->data << ":\n";
    cout << "Anak kiri: " << (node->left ? node->left->data : '-') << "\n";
    cout << "Anak kanan: " << (node->right ? node->right->data : '-') << "\n";
}

// Menampilkan Semua Descendant
void tampilkanDescendant(Pohon *node) {
    if (!node) {
        cout << "Node tidak ditemukan.\n";
        return;
    }
    cout << "Descendant dari " << node->data << ": ";
    queue<Pohon *> q;
    q.push(node);
    while (!q.empty()) {
        Pohon *curr = q.front();
        q.pop();
        if (curr != node) cout << curr->data << " ";
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
    cout << "\n";
}

// Menu
void menu() {
    char data;
    int pilihan;
    Pohon *node;

    do {
        cout << "\nMenu Binary Tree:\n";
        cout << "1. Buat Root\n";
        cout << "2. Tambah Kiri\n";
        cout << "3. Tambah Kanan\n";
        cout << "4. Tampilkan Anak\n";
        cout << "5. Tampilkan Descendant\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Masukkan data root: ";
            cin >> data;
            buatNode(data);
            break;
        case 2:
            cout << "Masukkan data node parent: ";
            cin >> data;
            node = root;
            cout << "Masukkan data node kiri: ";
            cin >> data;
            insertLeft(data, node);
            break;
        case 3:
            cout << "Masukkan data node parent: ";
            cin >> data;
            node = root;
            cout << "Masukkan data node kanan: ";
            cin >> data;
            insertRight(data, node);
            break;
        case 4:
            cout << "Masukkan data node: ";
            cin >> data;
            tampilkanChild(root);
            break;
        case 5:
            cout << "Masukkan data node: ";
            cin >> data;
            tampilkanDescendant(root);
            break;
        case 0:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);
}

int main() {
    init();
    menu();
    return 0;
}
