#include <bits/stdc++.h>
using namespace std;
/*
Sir Piero, dono de uma gigantesca fortuna, já passou por tempos ruins, sua conta bancária variou ao longo de sua vida. 
Agora, Piero decidiu analisar essa variação e quer saber qual a maior diferença entre dois valores de sua conta bancária. 
Ajude-o a encontrar o valor certo.

Input
    Na primeira linha será dado um inteiro N (2 ≤ N ≤ 10^5), o número de valores de sua conta a serem analisados. 
    A segunda linha contém N inteiros Vi(1 ≤ N ≤ 10^9), os valores da conta de Piero.
    
Output
    Imprima a maior diferença entre dois de todos os valores da conta de Piero.
*/
int main() {

    int n, v, maior, menor;
    cin >> n >> v;

    maior = menor = v;

    for (int i = 1; i < n; i++) {
        cin >> v;
        if (v >= maior) {
            maior = v;
        } else if (v <= menor) {
            menor = v;
        }
    }

    cout << (maior - menor) << '\n';

    return 0;
}
