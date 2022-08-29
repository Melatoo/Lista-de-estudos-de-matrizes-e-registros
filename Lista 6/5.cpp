#include <iostream>
#include <string.h>

using namespace std;


struct resultado {
    int dezenas[6];
    int soma = 0;
};

resultado *maior_soma (resultado *a, int n) {
    int maior = 0;
    int posicao;
    for (int i = 0; i < n; i++) {
        if (a[i].soma > maior) {
            maior = a[i].soma;
            posicao = i;
        }
    }
    return &a[posicao];
}

int main () {
    int n;
    cin >> n;
    resultado *a;
    a = new resultado[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> a[i].dezenas[j];
            a[i].soma += a[i].dezenas[j];
        }
    }
    resultado *b;
    b = maior_soma(a, n);
    for (int k = 0; k < 6; k++) {
        cout << b->dezenas[k] << " ";
    }
    return 0;
}