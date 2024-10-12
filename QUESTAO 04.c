#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int i, j, indiceMaior, temp, qtdNotas;

    printf("Informe o número de alunos: ");
    scanf("%d", &qtdNotas);

    float notas[qtdNotas];

    for (i = 0; i < qtdNotas; i++) {
        printf("Informe a nota do %d° aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < qtdNotas - 1; i++) {
        indiceMaior = i;

        for (j = i + 1; j < qtdNotas; j++) {
            if (notas[j] > notas[indiceMaior]) {
                indiceMaior = j;
            }
        }

        if (indiceMaior != i) {
            temp = notas[i];
            notas[i] = notas[indiceMaior];
            notas[indiceMaior] = temp;
        }
    }

    printf("\nNotas em ordem decrescente:\n");
    for (i = 0; i < qtdNotas; i++) {
        printf("%.1f\n", notas[i]);
    }
    return 0;
}
