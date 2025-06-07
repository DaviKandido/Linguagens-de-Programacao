#include <iostream>
using namespace std;

// Função para somar dois inteiros
int soma(int a, int b) {
    return a + b;
}


int main() {
    int x = 10;
    int y = 5;
    int resultado = soma(x, y);

    cout << resultado << endl; // Saída: 15
    return 0;
}


