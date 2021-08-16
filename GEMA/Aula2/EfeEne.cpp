#include <bits/stdc++.h>
using namespace std;

/*
Seja fn uma sequência definida da seguinte forma:

f1 = 1

fn = 1 + Somatório da expressão fi , para i variando de 1 até n-1

Ou seja, o n-ésimo termo da sequência é a soma dos termos anteriores mais 1.

Sua tarefa será, dado n e k, responda quantas vezes o dígito k aparece como dígito da unidade nos números f1, f2, ..., fn.

Input
    Dois números inteiros 1 ≤ n ≤ 10^9 e 0 ≤ k ≤ 9.

Output
    A quantidade de vezes que o dígito k aparece como dígito da unidade na sequência definida acima
*/

// 1 2 4 8 16 32 64 128 256 512 1024 ...

// 1 2 4 8 6 2 4 8 6 2 4

// 2 4 8 6 - 2 4 8 6 - 2 4 ...

int main() {

    int n, k;
    cin >> n >> k;

    int res;
    int ciclos = (n-1) /4;
    int sobra = (n-1) % 4;

    if (k == 1) {
        res = 1;
    }
    else if (k == 2){
        res = ciclos; 
        res += (sobra >=1);
    }
    else if (k == 4){
        res = ciclos; 
        res += (sobra >=2);
    }
    else if (k == 6){
        res = ciclos; 
    }   
    else if (k == 8){
        res = ciclos; 
        res += (sobra >=3);
    }
    else{
        res = 0;
    }

    cout << res << '\n';

    return 0;
}
