#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int tamanho, valorProcurado, inicio = 0, fim, meio, encontrado = 0;

    printf("Tamanho da lista: ");
    scanf("%d", &tamanho);

    int lista[tamanho];
    fim = tamanho - 1;

    printf("\nInforme %d números inteiros em ordem crescente:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("\nInforme o número que deseja buscar: ");
    scanf("%d", &valorProcurado);

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (lista[meio] == valorProcurado) {
            printf("\nO número %d foi encontrado na posição %d.\n", valorProcurado, meio + 1);
            encontrado = 1;
            break;
        }
        else if (lista[meio] > valorProcurado) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }

    if (!encontrado) {
        printf("\nO número %d não foi encontrado na lista.\n", valorProcurado);
    }
    return 0;
}
