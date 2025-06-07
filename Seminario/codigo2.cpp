#include <iostream>
#include <string>

class Pessoa {
     string nome;
public:
     Pessoa(string n) : nome(n) {}
     void apresentar() {
        cout << "Olá, sou " << nome << endl;
     }
};


int main() {
    Pessoa * p1 = new Pessoa("Carlos");
    Pessoa * p2 = new Pessoa("Júlia");

    p1->apresentar(); // Saída: Olá, sou Carlos
    p2->apresentar(); // Saída: Olá, sou Júlia

    delete(p1);
    delete(p2);
    return 0;
}


