#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

setlocale (LC_ALL, "portuguese");

    int v, a = 0, b = 1, c = 1;
    printf("Digite um n�mero: ");
    scanf("%d", &v);

    while (c < v)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == v)
    {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", v);
    }
    else
    {
        printf("O n�mero %d n�o pertence � sequ�ncia de Fibonacci.\n", v);
    }


}


