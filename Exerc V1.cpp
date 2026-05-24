#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[10];
    int soma = 0;
    float media;
    int i;

    printf("Calcule a media entre 10 numeros\n");

    // Entrada dos números
    for(i = 0; i < 10; i++) {

        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    // Cálculo da média
    media = soma / 10.0;

    printf("\nA media dos numeros digitados e: %.2f\n", media);

    system("PAUSE");
    return 0;
}

