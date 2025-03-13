// 1) Definição de amarração;

//  Amarrações (ou binding) podem ser definidas como o processo de vinculação, ou seja, a ação de dar um identificador a um elemento do programa seja uma função, objeto, valor (variável) ou a um tipo de dado, ou endereço de memoria.

// 2) "LP favorita";

// Minha linguagem de programação escolhida foi: C++

// 3) trecho de código com algum tipo de declaração, em sua "LP favorita".

/* 
Este exemplo mistura alguns tipos de amarrações, como na ocorrida
na POO (Amarrações de classe), onde o bloco que contem a classe é vinculada/amarrada a 
"Calculadora", que por sua vez possui funções que também contem suas próprias
 amarrações (Amarrações de Método), ou seja, possuem seus identificadores interligados a classe calculadora
 Amarrações de Objeto, onde ao instanciar Calculadora como cal, associa-se
 "Calculadora" ao identificador "cal" por todo o bloco da main,
 E as amarrações de tipo e variáveis, atribuindo/vinculando nomes
 as variáveis que também são amarradas a um tipo  
*/

#include <iostream>

using namespace std;

// Temos aqui um exemplo de amarração de classe
class Calculadora{
  public : 
    int soma(int a, int b){ return a+b; } // Aqui um exemplo de amarração de Método
    int subtracao(int a, int b){ return a-b; }
    int multiplicacao(int a, int b){ return a*b; }
    int divisao(int a, int b){ return a/b; }
};

int main(){

  Calculadora cal; // Amarração de Objeto

  cout << "Escolha uma operação sendo a=20 e b=10 : \n";
  cout << "1 - Soma\n";
  cout << "2 - Subtração\n";
  cout << "3 - Multiplicação\n";
  cout << "4 - Divisão\n";
  cout << "opção: ";
  
  int opcao; // Amarração de variável e tipo
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
