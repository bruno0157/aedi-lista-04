#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int idade = 0, faixaEtaria = 0;

    printf("Insira uma idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        faixaEtaria = 1;
    } else if (idade <= 65) {
        faixaEtaria = 2;
    } else {
        faixaEtaria = 3;
    }

    switch (faixaEtaria) {
        case 1:
            printf("\nMenor de idade\n");
            break;
        case 2:
            printf("\nMaior de idade\n");
            break;
        case 3:
            printf("\nIdoso\n");
            break;
        default:
            printf("\nIdade inválida.\n");
    }

    return 0;
}
