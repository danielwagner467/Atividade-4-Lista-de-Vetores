#include <iostream>

using namespace std;

int main() {

    int v1[10], v2[10];

    // Entrada dos valores
    for(int i = 0; i < 10; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> v1[i];
    }

    // Inversão do vetor
    for(int i = 0; i < 10; i++) {
        v2[i] = v1[9 - i];
    }

    // Exibindo vetor original
    cout << "\nVetor original:\n";

    for(int i = 0; i < 10; i++) {
        cout << v1[i] << " ";
    }

    // Exibindo vetor invertido
    cout << "\n\nVetor invertido:\n";

    for(int i = 0; i < 10; i++) {
        cout << v2[i] << " ";
    }

    cout << endl;

    system("pause");
    return 0;
}