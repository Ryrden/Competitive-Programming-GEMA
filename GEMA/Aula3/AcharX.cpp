#include <bits/stdc++.h>
using namespace std;
/*
Dado um vetor V de tamanho N ordenado de maneira não decrescente e M queries, 
sendo cada query um valor Xj, diga o valor Vi do vetor que minimize para cada query.

Input
    A primeira linha da entrada é composta por dois inteiros N (1 ≤ N ≤ 10^5) e M (1 ≤ M ≤ 10^5)

    A segunda linha contém N inteiros Vi (1 ≤ Vi ≤ 10^9), os valores do vetor. É garantido que Vi ≤ Vi + 1 para todo i < N

    As próximas M linhas contém um inteiro Xj (1 ≤ Xj ≤ 10^9) cada, o valor da query

Output
    Na saida imprima M46 números, a j-ésima linha deve conter o valor Vi que minimize o módulo (1 ≤ i ≤ N). 
    Caso haja mais de um Vi que minimize, imprima o de menor posição (Que tenha menor i)
*/
typedef long long ll;

int Encontra_Minimo(int n, ll v[100005], ll x) {
    ll first = 0;
    ll last = n - 1;
    ll ans, mid;

    ll query;
    ll minimo = 100000000000;

    while (first <= last) {
        mid = (first + last) / 2;

        query = abs(v[mid] - x);

        if (query < minimo) {
            minimo = query;
            ans = v[mid];
        } else if (query == minimo && v[mid] < ans) {
            ans = v[mid];
        }
        if (v[mid] > x) {
            last = mid - 1;
        } else if (v[mid] < x) {
            first = mid + 1;
        } else {
            return v[mid];
        }
    }

    return ans;
}

int main() {

    ll v[100005], x[100005];

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> x[j];
    }

    for (int k = 0; k < m; k++) {
        cout << Encontra_Minimo(n, v, x[k]) << '\n';
    }

    return 0;
}
