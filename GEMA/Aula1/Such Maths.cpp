#include <bits/stdc++.h>
using namespace std;

/*
Dada a equação: x²-y²=p, onde p é um número primo e x e y pertence aos conjunto dos números naturais. Imprima todas os pares (x,y) que a satisfaça.

Input
Apenas um número p (1 < p < 109). É garantido que p é um número primo.

Output
Imprima um número k denotando o número de pares (x,y) que satisfazem a equação. Então imprima k linhas, cada uma contendo dois números, x e y.
*/

int main(){

    int p;

    cin >> p;
    if (p == 2){
        cout << 0;
    }
    else{
        cout << 1 << endl << p/2 + 1 << " " << p/2;
    }



 return 0;
}
