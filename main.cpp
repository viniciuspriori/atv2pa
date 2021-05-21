#include <iostream>
#include <string>

using namespace std;

int main() {
  char mensagem[100]; 
  int num; 
  char* m = mensagem;
  char s1, s2;

  cout << "digite mensagem: \n";
  cin >> mensagem;

  m = mensagem;

  cout << *m << endl; 

  cout << "caractere a ser substituido: \n";
  cin >> s1; 

  cout << "caractere a ser colocado no lugar do anterior: \n";
  cin >> s2; 


}