

    

#include <iostream>
#include <string>
#include <ctime>

using namespace std;



int main() { 
    srand(time(0));
    int m, n, i, t, j, k;

    cout << "da quanti elementi è composto il vettore?" << endl;
    cin >> n;
    cout << "da quanti elementi è composto l'altro vettore?" << endl;
    cin >> m;
    i = 0;
    int v1[n];
    int v2[m];

    while (i < n) {
        v1[i] = rand() % (n + 1);
        i = i + 1;
    }
    j = 0;
    while (j < m) {
        v2[j] = rand() % (n + 1);
        j = j + 1;
    }
    i = 0;
    j = 0;
    t = 0;
    while (i <= n - 1) {
        j = 0;
        while (j <= n - 2 - i) {
            if (v1[j] > v1[j + 1]) {
                t = v1[j];
                v1[j] = v1[j + 1];
                v1[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << v1[i] << endl;
        i = i + 1;
    }
    i = 0;
    j = 0;
    t = 0;
    while (j <= m - 1) {
        i = 0;
        while (i <= m - 2 - j) {
            if (v2[i] > v2[i + 1]) {
                t = v2[i];
                v2[i] = v2[i + 1];
                v2[i + 1] = t;
            }
            i = i + 1;
        }
        j = j + 1;
    }
    j = 0;
    while (j < m) {
        cout << v2[j] << endl;
        j = j + 1;
    }
    int v3[n + m];

    i = 0;
    j = 0;
    k = 0;
    while (i <= n - 1 && j <= m - 1) {
        if (v1[i] <= v2[j]) {
            v3[k] = v1[i];
            i = i + 1;
        } else {
            v3[k] = v2[j];
            j = j + 1;
        }
        k = k + 1;
    }
    while (i <= n - 1) {
        v3[k] = v1[i];
        k = k + 1;
        i = i + 1;
    }
    while (j <= m - 1) {
        v3[k] = v2[j];
        k = k + 1;
        j = j + 1;
    }
    k = 0;
    while (k <= m + n - 1) {
        cout << " il vettore completo è" << v3[k] << endl;
        k = k + 1;
    }
    int inizio, fine, medio, x;
    int indice;

    cout << "quale numero vuoi cercare" << endl;
    cin >> x;
    indice = (int) (-1);
    inizio = 0;
    fine = n - 1;
    while (indice == -1 && inizio <= fine) {
        medio = (int) (inizio + (double) (fine - inizio) / 2);
        if (V[medio] == x) {
            indice = medio;
        } else {
            if (x > V[medio]) {
                inizio = medio + 1;
            } else {
                fine = medio - 1;
            }
        }
    }
    cout << "il numero è stato trovato nella cella" << indice << endl;
    }
