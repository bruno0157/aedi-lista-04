#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int qtd;

    printf("Informe a quantidade de produtos: ");
    scanf("%d", &qtd);

    float precos[qtd];

    for (int i = 0; i <qtd; i++) {
        printf("Informe o preço do %d° produto: ", i + 1);
        scanf("%f", &precos[i]);
    }

    for (int i = 1; i < qtd; i++) {
        float chave = precos[i];
        int j = i - 1;

        while (j >= 0 && precos[j] > chave) {
            precos[j + 1] = precos[j];
            j--;
        }

        precos[j + 1] = chave;
    }

    printf("\nLista de preços em ordem crescente:\n");
    for (int i = 0; i < qtd; i++) {
        printf("R$ %.2f\n", precos[i]);
    }
    return 0;
}
