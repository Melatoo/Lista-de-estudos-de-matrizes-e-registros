#include <iostream>
#include <string.h>

using namespace std;

int main () {
	int n, num = 0;
	cin >> n;
	int matriz[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matriz[i][j];
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = n-i; j < n; j++) {
			cout << matriz[i][j] << " ";
			num += matriz[i][j];
		}
	}
	cout << endl << num;
	
	return 0;
}
