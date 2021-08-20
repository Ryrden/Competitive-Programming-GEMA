#include <bits/stdc++.h>
using namespace std;
/*
Necau Cereal? Sucrilhos Kellog's?

Claro que não. O melhor cereal de todos é o Fruit Loppa's, o cereal que te deixa pistola.

Tomando seu cereal matinal (Fruit Loppa's), você percebeu que, para ficar pistola, deve sempre comer o 
cereal seguindo uma regra especial. Considere que na sua tigela têm N grãos restantes, e você colocou M 
grãos na última colherada. A sua próxima colherada deverá ter um número de grãos múltiplo de M. A primeira 
colherada pode conter qualquer número de grãos. Nenhuma colherada pode ser tomada sem nenhum grão. Considere 
que uma forma de fazer a refeição só é válida se todos os grãos forem comidos.

Dado o número de grãos no início do café da manhã, responda de quantas formas é possível comer o cereal.

Input
    A entrada contém dois números, N (1 ≤ N ≤ 50).

Output
    Imprima o número de formas de fazer a refeição e ficar pistola.
*/
int solve(int n, int m) {
    if (n == 0)
        return 1;

    int ans = 0;
    for (int j = 1; j <= n; j++) {
        if (j % m == 0) {
            ans += solve(n - j, j);
        }
    }

    return ans;
}

int main() {

    int n;
    cin >> n;
    cout << solve(n, 1) << '\n';

    return 0;
}
