#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

// Fungsi untuk mengecek apakah suatu kalimat adalah palindrom
bool isPalindrome(const string &str) {
    stack<char> s;
    string filteredStr = "";

    // Filter hanya huruf dan angka, abaikan spasi dan tanda baca
    for (char ch : str) {
        if (isalnum(ch)) {
            filteredStr += tolower(ch);  // Menjadikan semua karakter huruf kecil untuk perbandingan
        }
    }

    int length = filteredStr.size();
    int halfLength = length / 2;

    // Masukkan setengah bagian pertama ke dalam stack
    for (int i = 0; i < halfLength; i++) {
        s.push(filteredStr[i]);
    }

    // Mulai perbandingan dari tengah jika panjang ganjil
    int start = (length % 2 == 0) ? halfLength : halfLength + 1;

    // Bandingkan setengah bagian kedua dengan stack
    for (int i = start; i < length; i++) {
        if (s.top() != filteredStr[i]) {
            return false;
        }
        s.pop();
    }

    return true;
}

int main() {
    string input;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
