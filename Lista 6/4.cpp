#include <iostream>
#include <string.h>

using namespace std;

struct politico {
    string partido;
    string nome;
};

struct operacao {
    string pf;
    string nome;
    int valor;
};

int main () {
    int n, m;
    cin >> n;
    politico a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].partido;
        cin >> a[i].nome;
    }
    cin >> m;
    operacao b[m];
    for (int j = 0; j < m; j++) {
        cin >> b[j].pf;
        cin >> b[j].nome;
        cin >> b[j].valor;
    }
    string part, op;
    cin >> part >> op;
    int total = 0;
    for (int k = 0; k < n; k++) {
        if (a[k].partido == part) {
            for (int l = 0; l < m; l++) {
                if (b[l].pf == op && b[l].nome == a[k].nome) {
                    total += b[l].valor; 
                }
            }
        }
    }
    cout << total;
    return 0;
}