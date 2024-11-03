#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

const int MAX_SIZE = 20;
typedef int infotype;

struct Stack {
    infotype info[MAX_SIZE];
    int top;
};

void createStack(Stack &S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(const Stack &S);
void balikStack(Stack &S);
void pushAscending(Stack &S, infotype x);
void getInputStream(Stack &S);

#endif // STACK_H
