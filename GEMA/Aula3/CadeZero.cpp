#include <bits/stdc++.h>
using namespace std;
/*
O problemsetter ficou com preguiça de escrever o enunciado. 
Dada uma matriz de números na entrada imprima na saída a posição do número 0

Input
    A primeira linha da entrada contém dois inteiros N e M (1 ≤ N, M ≤ 10^3), indicando as dimensões da matriz.
    As próximas N linhas contém M inteiros Aij(0 ≤ Aij ≤ 10^6) cada, os números presentes na matriz.
    É garantido que haverá exatamente um único zero na matriz.
    O canto superior esquerdo é o (0, 0) e o inferior direito o (N - 1, M - 1)

Output
    Imprima na saída dois números, a posição do número 0 na matriz.
*/

int main() {

    int n, m, Aij;
    cin >> n >> m;

    int pi,pj;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> Aij;
            if (Aij == 0){
                pi = i;
                pj = j;
            }
        }
    }

    cout << pi << ' ' << pj << '\n';
    return 0;
}
