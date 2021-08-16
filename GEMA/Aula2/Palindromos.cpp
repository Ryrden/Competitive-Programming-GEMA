#include <bits/stdc++.h>
using namespace std;
/*
Um palíndromo é uma palavra que é igual quando lida da esquerda pra direita e da direita pra esquerda. 
Por exemplo, aabaa, abccba e aa são palíndromos enquanto abc, ba e abbc não são palíndromos.

Dada uma palavra, qual é o mínimo de letras que tem que ser trocadas para transformá-la em um palíndromo?

Input
    Na primeira linha do input será dado um inteiro N (1 ≤ N ≤ 10^6) indicando o número de caracteres da palavra dada. 
    Na linha seguinte será dada a palavra que será composta apenas de caracteres lowercase ('a' - 'z')

Output
    Imprima um único inteiro. O número mínimo de letras que terão que ser mudadas para transformar a palavra em um palíndromo
*/
int main() {

    int n;
    string palindromo;

    cin >> n >> palindromo;
    int dir = n - 1;
    int trocas = 0;

    if (n % 2 != 0) {
        for (int esq = 0; esq <= (n / 2); esq++, dir--) {
            if (palindromo[esq] != palindromo[dir]) {
                trocas++;
            }
        }
    } else {
        for (int esq = 0; esq < (n / 2); esq++, dir--) {
            if (palindromo[esq] != palindromo[dir]) {
                trocas++;
            }
        }
    }

    cout << trocas << '\n';
    return 0;
}
