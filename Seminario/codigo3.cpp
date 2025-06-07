#include <iostream>
using namespace std;

int main() {
    // Lambda: função anônima que retorna a soma de dois inteiros
    auto soma = [](int a, int b) {
        return a + b;
    };
    cout << soma(3, 4) << endl; // Saída: 7
    return 0;
}