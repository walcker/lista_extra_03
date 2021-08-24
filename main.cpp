#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "usuario.h"

using namespace std;

int main() {

  //Permite usar acentos
    setlocale(LC_ALL,"");

    vector<Usuario> cadastro;
    map<int, string> usuarios;
    
    usuarios.insert(pair<int, string>(383474924, "João"));
    usuarios.insert(pair<int, string>(56492578095, "Maria"));
    usuarios.insert(pair<int, string>(87465265, "José"));
  
    return 0;
}