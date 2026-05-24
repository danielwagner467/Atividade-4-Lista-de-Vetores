#include <iostream>

using namespace std;

int main() {

    int vetor[10];
    int pares = 0;
    int impares = 0;

    // Entrada dos números
    for(int i = 0; i < 10; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Verificação de pares e ímpares
    for(int i = 0; i < 10; i++) {

        if(vetor[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "\nQuantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;

    system("pause");
    return 0;
}