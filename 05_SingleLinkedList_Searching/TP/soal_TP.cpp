#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert elements into the list
void insert(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode;
}

// Soal 1: Function to search an element in the list
int searchElement(Node* head, int value) {
    Node* current = head;
    int position = 1;
    while (current) {
        if (current->data == value) {
            cout << "Element found at position: " << position 
                 << ", Address: " << current << endl;
            return position;
        }
        current = current->next;
        position++;
    }
    cout << "Element not found in the list." << endl;
    return -1;
}

// Soal 2: Function to sort the list using Bubble Sort
void bubbleSortList(Node*& head) {
    if (!head) return;
    bool swapped;
    do {
        swapped = false;
        Node* current = head;
        while (current->next) {
            if (current->data > current->next->data) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}

// Soal 3: Function to insert an element in sorted order
void insertSorted(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head || head->data >= value) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next && current->next->data < value) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

// Function to print the list
void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int choice, value;

    // Input for Soal 1
    cout << "Enter 6 elements for the list:" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> value;
        insert(head, value);
    }

    cout << "Enter element to search: ";
    cin >> value;
    searchElement(head, value);

    // Sorting for Soal 2
    cout << "\nSorting list using bubble sort..." << endl;
    bubbleSortList(head);
    printList(head);

    // Insert sorted for Soal 3
    cout << "\nEnter 4 elements to create a sorted list:" << endl;
    head = nullptr;
    for (int i = 0; i < 4; i++) {
        cin >> value;
        insertSorted(head, value);
    }

    cout << "Enter an element to insert in sorted order: ";
    cin >> value;
    insertSorted(head, value);
    printList(head);

    return 0;
}
