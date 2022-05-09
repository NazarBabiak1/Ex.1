#include <stdio.h>

const int maxlength = 1000;

typedef char elementtype;

struct STACK
{
    int top;
    elementtype elements[maxlength];
};

void MAKENULL(STACK& S) {
    S.top = maxlength;
}

bool EMPTY(STACK& S) {
    if (S.top > maxlength)return true;
    return false;
}

elementtype TOP(STACK& S) {
    if (EMPTY(S))throw "stack empty";
    return S.elements[S.top];
}

void POP(STACK& S) {
    if (EMPTY(S))throw "stack empty";
    S.top = S.top + 1;
}

void PUSH(elementtype x, STACK& S) {
    if (S.top == 0)throw "stack full";
    S.top = S.top - 1;
    S.elements[S.top] = x;
}

void PRINT(STACK S) {
    for (int i = maxlength - 1; i >= S.top; i--)
    {
        printf("%c", S.elements[i]);
    }
}
