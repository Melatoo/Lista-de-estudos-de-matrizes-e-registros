#include <iostream>
#include <string.h>

using namespace std;

int main () {
	char matriz[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matriz[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++) {
		if (matriz[i][0] != '.' && matriz[i][0] == matriz[i][1] && matriz [i][0] == matriz[i][2]) {
			cout << matriz[i][0];
			for (int g = 0; g < 3; g++) {
				cout << endl << i << " " << g;
			}
			return 0;
		}
	}
	
	for (int j = 0; j < 3; j++) {
		if (matriz[0][j] != '.' && matriz[0][j] == matriz[1][j] && matriz [0][j] == matriz[2][j]) {
			cout << matriz[0][j];
			for (int g = 0; g < 3; g++) {
				cout << endl << g << " " <<  j;
			}
			return 0;
		}
	}
	
	if (matriz[0][0] != '.' && matriz[0][0] == matriz[1][1] && matriz [0][0] == matriz[2][2]) {
		cout << matriz[0][0];
		for (int g = 0; g < 3; g++) {
			cout << endl << g << g;
		}
		return 0;
	}
	
	if (matriz[0][2] != '.' && matriz[0][2] == matriz[1][1] && matriz [0][2] == matriz[2][0]) {
		cout << matriz[0][2];
		for (int g = 0; g < 3; g++) {
			cout << endl << g << g;
		}
		return 0;
	}
	cout << "-1";
	return 0;
}


