#include <iostream>
#include <string.h>

using namespace std;

int main () {
	int matriz[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> matriz[i][j];
		}
	}
	
	int maior = matriz[0][0], linhaMaior = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (matriz[i][j] > maior) {
			maior = matriz[i][j];
			linhaMaior = i;
			}
		}
	}
	
	int menor = matriz[linhaMaior][0], colunaMenor = 0;
	for (int j = 0; j < 10; j++) {
		if (matriz[linhaMaior][j] < menor) {
			menor = matriz[linhaMaior][j];
			colunaMenor = j;
		}
	}
	
	cout << menor << endl << linhaMaior << endl << colunaMenor;
	
	return 0;
}
