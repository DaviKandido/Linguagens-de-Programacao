// 1) Definição de amarração;

//  Amarrações podem ser definidas como uma vinculação, ou seja, a ação de dar um um identificador a um processo (função ou objeto), valor (variável) ou a um tipo de dado, ou endereço de memoria.

// 2) "LP favorita";

// Minha linguagem de programação escolhida foi: C++

// 3) trecho de código com algum tipo de declaração, em sua "LP favorita".

#include <iostream>

using namespace std;

class Calculadora{
  public : 
    int soma(int a, int b){ return a+b; }
    int subtracao(int a, int b){ return a-b; }
    int multiplicacao(int a, int b){ return a*b; }
    int divisao(int a, int b){ return a/b; }
};

int main(){

  Calculadora cal;

  cout << "Escolha uma operação sendo a=20 e b=10 : \n";
  cout << "1 - Soma\n";
  cout << "2 - Subtração\n";
  cout << "3 - Multiplicação\n";
  cout << "4 - Divisão\n";
  cout << "opção: ";
  
  int opcao;
  cin >> opcao;

  int result;
  switch (opcao){
    case 1:
      result = cal.soma(20,10);
    break;
    case 2:
      result = cal.subtracao(20,10);
    break;
    case 3:
      result = cal.multiplicacao(20,10);
    break;
    case 4:
      result = cal.divisao(20,10);
    break;
  }

  cout << "Resultado: " << result << endl;

  return 0;
}