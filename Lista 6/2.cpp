#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int main () {
    int a[200], n, count = 0, alunos;
    int *b;
    //recebe os horários até a hora ser negativa
    for (int i = 0; i < 200; i++) {
        cin >> n;
        if (n < 0) 
            break;
        else {
            a[i] = n;
            count++;
        }
    }
    //aloca o vetor b com o tamanho do vetor a
    b = new int[count];
    //copia os valores de a para b
    for (int j = 0; j < count; j++) {
        b[j] = a[j];
    }
    //definir quantos alunos são
    alunos = count/2;
    //descobrir qual horário 70% dos alunos já haviam terminado a prova
    int setenta = floor(count * 0.7);
    //descobrir a porcentagem de alunos que terminaram a prova no horário inserido pelo usuário
    int hora, minuto;
    cin >> hora >> minuto;
    int tempo = hora * 100 + minuto;
    int count2 = 0;
    for (int k = 0; k < count; k++) {
        if (k % 2 == 0) {
        int aux = b[k] * 100 + b[k+1];
        if (aux <= tempo)
            count2++;
        }
    }
    float porcentagem = ((float)count2/(float)alunos)*100;
    //imprimir os resultados
    cout << b[setenta+1] << ":" << b[setenta] << endl;
    cout << porcentagem;
    return 0;
}