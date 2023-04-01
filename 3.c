#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL, "portuguese");

    // vetor com o faturamento diário da distribuidora
    float faturamento_diario[] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};

    // variáveis para armazenar o menor e o maior valor de faturamento
    float menor_valor = faturamento_diario[0];
    float maior_valor = faturamento_diario[0];

    // variável para armazenar a soma dos valores de faturamento
    float soma = 0.0;

    // variável para armazenar a média mensal de faturamento
    float media_mensal;

    // contador de dias com faturamento acima da média mensal
    int dias_acima_media = 0;

    // calculando o menor e o maior valor de faturamento
    for (int i = 0; i < 30; i++) {
        if (faturamento_diario[i] < menor_valor) {
            menor_valor = faturamento_diario[i];
        }
        if (faturamento_diario[i] > maior_valor) {
            maior_valor = faturamento_diario[i];
        }
        soma += faturamento_diario[i];
    }

    // calculando a média mensal de faturamento
    media_mensal = soma / 30;

    // contando o número de dias com faturamento acima da média mensal
    for (int i = 0; i < 30; i++) {
        if (faturamento_diario[i] > media_mensal) {
            dias_acima_media++;
        }
    }

    // exibindo os resultados
    printf("Menor valor de faturamento: R$ %.4f\n", menor_valor);
    printf("Maior valor de faturamento: R$ %.4f\n", maior_valor);
    printf("Número de dias com faturamento acima da média mensal (R$ %.4f): %d\n", media_mensal, dias_acima_media);

    return 0;
}
