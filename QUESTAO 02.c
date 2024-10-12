#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero = 0, contPares;

    printf("Insira um número inteiro positivo: ");
    scanf("%d", &numero);

    int numPares[numero];

    for (int i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
            numPares[contPares] = i;
            contPares++;
        }
    }

    printf("\nNúmeros pares entre 1 e %d: \n", numero);
    for (int i = 0; i < contPares; i++) {
        printf("%d\n", numPares[i]);
    }
    return 0;
}
