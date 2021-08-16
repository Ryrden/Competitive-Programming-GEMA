#include <bits/stdc++.h>
using namespace std;

/*
Dado um tabuleiro de Xadrez com N de largura e M de comprimento, imprima o número de casas pretas no tabuleiro.

Considere que a casa no canto superior esquerdo sempre é preta.

Input
O input terá dois números inteiros N e M (1 ≤ N ≤ 10^5, M ≤ 10^4), as dimensões do tabuleiro.

Output
Imprima o número de casas pretas.
*/
int main(){

    int m, n;

    cin >> m >> n;

    if ((m*n) % 2 == 0){
        cout << (m*n)/2;
    }
    else{
        cout << (m*n)/2 +1;
    }


 return 0;
}
