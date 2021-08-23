#include <iostream>
#include <string>
#include <vector>
#include "usuario.h"

using namespace std;

int main() {

  //Permite usar acentos
    setlocale(LC_ALL,"");

    string aux;
    vector<string> cadastro;
    Usuario u;
    while(u.nome != "exit"){
      cout << "Insira o nome do usário ou excreva 'exit' para sair" << endl;
      cin >> aux;
      u.nome = aux;
      cadastro.push_back(u.nome);   
    }    
     cout << "Nomes cadastrados: ";
     for(auto i = cadastro.begin() ;i != cadastro.end(); i++){
      cout << " " << *i;
    }
  
    return 0;
}