#include <iostream>
using namespace std;

void soalNomor3() {
    int n;

    cout << "Input: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int s = n - i; s > 0; s--) {
            cout << "  "; 
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << "* ";

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    for (int s = 0; s < n; s++) {
        cout << "  ";
    }
    cout << "*" << endl;
}

int main() {
    soalNomor3();
    return 0;
}
