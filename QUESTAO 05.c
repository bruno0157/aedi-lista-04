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

    printf("\nInforme %d n�meros inteiros em ordem crescente:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("\nInforme o n�mero que deseja buscar: ");
    scanf("%d", &valorProcurado);

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (lista[meio] == valorProcurado) {
            printf("\nO n�mero %d foi encontrado na posi��o %d.\n", valorProcurado, meio + 1);
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
        printf("\nO n�mero %d n�o foi encontrado na lista.\n", valorProcurado);
    }
    return 0;
}
