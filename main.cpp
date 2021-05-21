#include <iostream>
#include <string>

using namespace std;

int main() {
  char mensagem[10]; 
  int num; 
  char* m = mensagem;
  char s1, s2;
  char novamen[10];
  char *m2 = novamen; 

  cout << "digite mensagem: \n";
  cin >> mensagem;

  //cout << "caractere a ser substituido: \n";
  cin >> s1; 
  m=&s1; 

  //cout << "caractere a ser colocado no lugar do anterior: \n";
  cin >> s2; 
  m2=&s2; 

  for(m=mensagem; *m!='\0'; m++){
        cout << *m;
       /* if(mensagem[i]==s1){
          m=&mensagem[i];
        }*/

  }

}