#include <bits/stdc++.h>
using namespace std;
/*
Em uma manhã ensolarada, Cavernoso, um homem das cavernas típico, aprendeu a contar. Como um bom líder tribal, ele 
decidiu que, para cada dia, iria escrever nas paredes de sua caverna a quantidade de pessoas da tribo.

A contagem de Cavernoso era bem simples: havia um risco para cada pessoa. Por exemplo, se no dia 10 existissem 8 pessoas 
na tribo, Cavernoso desenharia:

||||||||

A caverna onde Cavernoso vivia foi encontrada milhares de anos depois, também em uma manhã ensolarada. 
Os arqueólogos sabem quantos dias cavernoso viveu, e sabem que as pinturas na caverna contam o número de pessoas 
na tribo em cada dia. Eles estão interessados na seguinte questão: qual foi o número de pessoas mais frequente em 
todos seus registros?

Note que sabe-se que não viveram mais de 10^3 pessoas na tribo ao mesmo tempo em um mesmo dia.

Input
    A entrada começa com um número, n (1 ≤ n ≤ 10^4), o número de dias que Cavernoso viveu. Seguem n linhas, 
    cada uma contendo um número m (1 ≤ m ≤ 10^3) de caracteres '|', representando a contagem de Cavernoso no respectivo dia.

Output
    Imprima o valor mais frequente na contagem de cavernoso em uma única linha. Se existir mais de uma resposta, 
    pode imprimir qualquer uma.
*/
int main() {

    int n, num_freq;
    int ma_freq = 0;
    string m;
    vector<int> vet(1001, 0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        int pessoas = m.size();
        vet[pessoas] += 1;
        if (vet[pessoas] > ma_freq) {
            ma_freq = vet[pessoas];
            num_freq = pessoas;
        }
    }

    cout << num_freq << '\n';

    return 0;
}
