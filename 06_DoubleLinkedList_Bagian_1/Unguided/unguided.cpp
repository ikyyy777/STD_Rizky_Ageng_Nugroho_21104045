#include <iostream>
#include <string>
using namespace std;

// Struktur Node untuk menyimpan data buku
struct BookNode {
    int id;
    string title;
    string author;
    BookNode* next;
    BookNode* prev;
};

// Struktur List untuk mengelola Double Linked List
struct BookList {
    BookNode* first;
    BookNode* last;
};

// Inisialisasi list buku
void createList(BookList &L) {
    L.first = NULL;
    L.last = NULL;
}

// Fungsi untuk membuat node buku baru
BookNode* createBookNode(int id, string title, string author) {
    BookNode* newBook = new BookNode;
    newBook->id = id;
    newBook->title = title;
    newBook->author = author;
    newBook->next = NULL;
    newBook->prev = NULL;
    return newBook;
}

// Fungsi untuk menambahkan buku di akhir list
void addBookLast(BookList &L, int id, string title, string author) {
    BookNode* newBook = createBookNode(id, title, author);
    if (L.first == NULL) {
        L.first = L.last = newBook;
    } else {
        newBook->prev = L.last;
        L.last->next = newBook;
        L.last = newBook;
    }
}

// Fungsi untuk menampilkan daftar buku dari awal ke akhir
void printBooksForward(const BookList &L) {
    BookNode* temp = L.first;
    cout << "Daftar Buku (dari awal ke akhir):\n";
    while (temp != NULL) {
        cout << "ID: " << temp->id << ", Judul: " << temp->title << ", Penulis: " << temp->author << endl;
        temp = temp->next;
    }
}

// Fungsi untuk menampilkan daftar buku dari akhir ke awal
void printBooksBackward(const BookList &L) {
    BookNode* temp = L.last;
    cout << "Daftar Buku (dari akhir ke awal):\n";
    while (temp != NULL) {
        cout << "ID: " << temp->id << ", Judul: " << temp->title << ", Penulis: " << temp->author << endl;
        temp = temp->prev;
    }
}

int main() {
    BookList library;
    createList(library);

    // Menambahkan beberapa buku ke dalam list
    addBookLast(library, 1, "C++ Programming", "Bjarne Stroustrup");
    addBookLast(library, 2, "Introduction to Algorithms", "Thomas H. Cormen");
    addBookLast(library, 3, "Design Patterns", "Erich Gamma");

    // Menampilkan daftar buku dari awal ke akhir
    printBooksForward(library);

    // Menampilkan daftar buku dari akhir ke awal
    printBooksBackward(library);

    return 0;
}
