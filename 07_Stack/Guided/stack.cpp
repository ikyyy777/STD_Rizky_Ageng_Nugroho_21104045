#include "stack.h"

void createStack(Stack &S) {
    S.top = -1;
}

void push(Stack &S, infotype x) {
    if (S.top < MAX_SIZE - 1) {
        S.info[++S.top] = x;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

infotype pop(Stack &S) {
    if (S.top >= 0) {
        return S.info[S.top--];
    } else {
        cout << "Stack kosong!" << endl;
        return -1;
    }
}

void printInfo(const Stack &S) {
    if (S.top == -1) {
        cout << "Stack kosong!" << endl;
    } else {
        for (int i = 0; i <= S.top; i++) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}

void balikStack(Stack &S) {
    int left = 0;
    int right = S.top;
    while (left < right) {
        swap(S.info[left], S.info[right]);
        left++;
        right--;
    }
}

void pushAscending(Stack &S, infotype x) {
    if (S.top < MAX_SIZE - 1) {
        int i = S.top;
        while (i >= 0 && S.info[i] > x) {
            S.info[i + 1] = S.info[i];
            i--;
        }
        S.info[i + 1] = x;
        S.top++;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

void getInputStream(Stack &S) {
    char ch;
    cout << "Masukkan angka atau tekan Enter untuk berhenti:" << endl;
    while ((ch = cin.get()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            push(S, ch - '0');
        }
    }
}
