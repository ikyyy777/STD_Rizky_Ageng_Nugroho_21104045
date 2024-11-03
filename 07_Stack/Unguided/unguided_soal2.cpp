#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

// Fungsi untuk membalik urutan kata dalam kalimat
string reverseSentence(const string &sentence) {
    stack<string> words;
    stringstream ss(sentence);
    string word;

    // Memasukkan setiap kata ke dalam stack
    while (ss >> word) {
        words.push(word);
    }

    string reversedSentence = "";

    // Mengeluarkan setiap kata dari stack untuk membalik urutan
    while (!words.empty()) {
        reversedSentence += words.top();
        words.pop();
        if (!words.empty()) {
            reversedSentence += " ";
        }
    }

    return reversedSentence;
}

int main() {
    string input;

    cout << "Masukkan sebuah kalimat (minimal 3 kata): ";
    getline(cin, input);

    string reversed = reverseSentence(input);
    cout << "Kalimat setelah dibalik: " << reversed << endl;

    return 0;
}
