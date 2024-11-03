#ifndef STACK_H
#define STACK_H

typedef char infotype;

struct Stack {
    infotype info[15];
    int Top;
};

// Deklarasi fungsi dan prosedur
void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, infotype x);
int pop(Stack &S);
void printInfo(Stack S);

#endif
