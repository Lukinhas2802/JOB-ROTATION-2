#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

setlocale (LC_ALL, "portuguese");

    int v, a = 0, b = 1, c = 1;
    printf("Digite um número: ");
    scanf("%d", &v);

    while (c < v)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == v)
    {
        printf("O número %d pertence à sequência de Fibonacci.\n", v);
    }
    else
    {
        printf("O número %d não pertence à sequência de Fibonacci.\n", v);
    }


}


