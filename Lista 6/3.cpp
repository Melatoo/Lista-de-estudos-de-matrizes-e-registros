#include <iostream>
#include <string.h>

using namespace std;

int main () {
    //define tamanho do tabuleiro
    int n;
    cin >> n;
    int a[n][n];
    //recebe as posições das peças
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    //encontra o cavalo(1)
    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }
    //encontra os peões que o cavalo pode comer
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 2) {
                if (i == x-1 && j == y-2) {
                    count++;
                }
                else if (i == x-2 && j == y-1) {
                    count++;
                }
                else if (i == x-2 && j == y+1) {
                    count++;
                }
                else if (i == x-1 && j == y+2) {
                    count++;
                }
                else if (i == x+1 && j == y+2) {
                    count++;
                }
                else if (i == x+2 && j == y+1) {
                    count++;
                }
                else if (i == x+2 && j == y-1) {
                    count++;
                }
                else if (i == x+1 && j == y-2) {
                    count++;
                }
            }
        }
    }
    //imprime o resultado
    cout << count;
}