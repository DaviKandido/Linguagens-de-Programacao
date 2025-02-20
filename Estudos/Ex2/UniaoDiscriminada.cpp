#include <iostream>
#include <string>

using namespace std;

struct TipoDados{
  enum Tipo {INTEIRO, REAL, LETRA} tipo; //Descriminador
  
  union {
    int inteiro;
    float real;
    char letra;
  } valor;
};


int main(){

  TipoDados uniao;
  int opcao;

  cout << "Escolha um tipo de dado: \n";
  cout << "1 - Inteiro\n";
  cout << "2 - Real\n";
  cout << "3 - Letra\n";
  cout << "Escolha: ";
  cin >> opcao;

  if(opcao < 1 || opcao > 3){
    cout << "Opcao invalida!\n";
    return 0;
  }

  cout << "Defina o valor do dado: ";
  switch(opcao){
    case 1: 
      cin >> uniao.valor.inteiro; 
      uniao.tipo = TipoDados::INTEIRO;
      break;
    case 2: 
      cin >> uniao.valor.real; 
      uniao.tipo = TipoDados::REAL;
      break;
    case 3: 
      cin >> uniao.valor.letra; 
      uniao.tipo = TipoDados::LETRA;
      break;
  }

  switch(uniao.tipo){
    case TipoDados::INTEIRO: 
      if(uniao.valor.inteiro == 0){
        cout << "Valor invalido!\n"; 
        return 0;
      }  
      cout << "Valor valido!\n"; 
      break;
    case TipoDados::REAL: 
      if(uniao.valor.real == 0){
        cout << "Valor invalido!\n"; 
        return 0;
      }  
      cout << "Valor valido!\n"; 
      break;
    case TipoDados::LETRA: 
      if(!((uniao.valor.letra >= 'A' && uniao.valor.letra <= 'Z' ) 
      ||(uniao.valor.letra >= 'a' && uniao.valor.letra <= 'z'))){
        cout << "Valor invalido!\n"; 
        return 0;
      }  
      cout << "Valor valido!\n"; 
      break;
  }

  cout << "O valor definido foi ";

  switch(uniao.tipo){
    case TipoDados::INTEIRO: 
      cout << "o nº inteiro " << uniao.valor.inteiro << endl; 
      break;
    case TipoDados::REAL: 
      cout << "o nº real " << uniao.valor.real << endl; 
      break;
    case TipoDados::LETRA: 
      cout << "a letra " << uniao.valor.letra << endl; 
      break;
  }
}