#include <string.h>
#include <iostream>

using namespace std;

struct dono {
	string nome, cpf;
};

struct carro {
	string placa, cor, marca;
	int ano;
	dono pessoa[2];
};

carro preenche () {
	carro aux;
	cin >> aux.placa >> aux.cor >> aux.ano >> aux.marca;
	for (int i = 0; i < 2; i++) {
		cin >> aux.pessoa[i].nome >> aux.pessoa[i].cpf;
	}
	return aux;
}

void procura (carro *c, string a, int b) {
	for (int i = 0; i < b; i++) {
		if (c[i].marca == a) {
			cout << i << endl << c[i].placa;
			for (int j = 0; j < 2; j++) {
				cout << endl << c[i].pessoa[j].nome << " " << c[i].pessoa[j].cpf;
			}
		}
	}
}

int main () {
	int n;
	cin >> n;
	carro *c;
	c = new carro[n];
	for (int i = 0; i < n; i++) {
		c[i] = preenche();
	}
	string marquinha;
	cin >> marquinha;
	procura (c, marquinha, n);
	free (c);
	return 0;
}

