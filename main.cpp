#include <iostream>
#include <string>

using namespace std;

int trocaP(char *m, char s1, char s2, char *m2){
    int cont = 0;

    while(*m2 != '\0'){
        if(*m2==s1){
          *m2=s2;
          cont++;  
        }
        cout << *m2; 
        m2++;
        
    }
      cout << endl;

    while(*m != '\0'){
        cout << *m; 
        m++;
    }

    return cont;
}

int main() {
  char mensagem[50]; 
  int num = 0; 
  char* m = mensagem;
  char s1, s2;
  char novamen[50];
  char* m2 = novamen; 

  cout << "digite mensagem: \n";
  cin >> mensagem;

  cout << "caractere a ser substituido: \n";
  cin >> s1;

  cout << "caractere a ser colocado no lugar do anterior: \n";
  cin >> s2;   

  for(int i =0; i<size(mensagem); i++){
      novamen[i] = mensagem[i];
  }

  num = trocaP(m, s1, s2, m2);
  cout << endl << num; 

}