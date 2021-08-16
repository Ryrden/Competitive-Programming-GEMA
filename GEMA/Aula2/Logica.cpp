#include <bits/stdc++.h>
using namespace std;
/*
Muitas pessoas não sabem que a capacidade humana de raciocício lógico, embora poderosa, pode se enganar facilmente 
diante de certos problemas e faz isso com frequência. Saber desse fato é importante pois tais erros afetam nosso cotidiano, 
por exemplo, quando se manifestam na forma argumentos falaciosos e/ou enviesados. O problema a seguir é um problema de lógica 
teoricamente simples, no entanto a maioria das pessoas às quais ele é apresentado não dá a resposta certa. 
Você consegue resolvê-lo?

Sobre uma mesa há n cartas com números em ambas as faces. Toda carta tem um número estritamente positivo de um lado e 
um número estritamente negativo do outro. É feita a seguinte afirmação:

Toda carta que tem em um dos lados um número positivo par tem também, no seu verso, um número negativo ímpar.

Dadas as faces viradas para cima de todas as cartas, determine o número mínimo de cartas que é necessário virar 
(ou seja, olhar o verso) para verificar se a afirmação acima é verdadeira para o conjunto de cartas dado.

Input
    A primeira linha contém o número n, 1 ≤ n ≤ 100000. A segunda linha contém n números inteiros, cada um deles 
    pertecendo ao intervalo [-100,0) U ( 0, 100].

Output
    A saída deve conter um único número inteiro, a resposta do problema.
*/
int main() {

    int n, card;

    cin >> n;

    int min = 0;
    for (int i = 0; i < n; i++) {
        cin >> card;
        if (card % 2 == 0) {
            min++;
        }
    }

    cout << min << '\n';

    return 0;
}
