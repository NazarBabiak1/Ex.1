#include <conio.h>
#include "Operators.h"

int main()
{
    STACK S = STACK();

    char c = '0';

    MAKENULL(S);

    while (c != '=') {

        c = _getch();

        switch (c) {

            // витерти останній символ              

        case '#': POP(S); break;

            // витерти усю стрічку

        case '@': MAKENULL(S); break;

            // продублювати останній символ

        case '^': PUSH(TOP(S), S); break;

            // додати символ до стрічки

        default: PUSH(c, S);
        }

        // вивести введену стрічку на екран

        PRINT(S);

        printf("\n");
    }

}
