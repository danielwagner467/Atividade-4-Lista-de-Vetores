#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[3];
    int soma = 0;
    float media;
    int i;

    printf("Calcule a media entre 3 numeros\n");

    // Entrada dos números
    for(i = 0; i < 3; i++) {

        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    // Cálculo da média
    media = soma / 3;

    printf("\nA media dos numeros digitados e: %.2f\n", media);

    system("PAUSE");
    return 0;
}