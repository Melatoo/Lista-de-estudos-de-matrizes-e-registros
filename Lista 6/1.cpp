#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char a[100];
    //recebe a string
    cin.getline(a, 100);
    int i = 0;
    //enquanto não chegar no fim da string ou não encontrar um espaço
    while (a[i] != '\0') {
        //se a[i] for igual a a[i+1], ou seja, se a[i] for igual ao próximo caractere
        if (a[i] == a[i+1]) {
            //joga todos os caracteres da string uma posição para trás
            for (int j = i; j < sizeof(a); j++) {
                a[j] = a[j+1];
            }
        }
        else {
            i++;
        }
    }
    cout << a;
    return 0;
}