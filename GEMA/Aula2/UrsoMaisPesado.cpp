#include <bits/stdc++.h>
using namespace std;
/*
Samuelito quer se tornar o mais pesado dos ursos, ou pelo menos mais pesado que seu irmão Loppamir.
Atualmente, Samuelito e Loppamir pesavam a e b respectivamente. É garantido que o peso de Samuelito é 
estritamente menor ou igual que o peso do seu irmão
Samuelito come muito e seu peso triplica após cada ano, enquanto o peso de Loppamir dobra todo ano.
Após quantos anos completos o peso de Samuelito vai ultrapassar estritamente o peso de Loppamir 
(Ou seja, o peso de Samuelito sera estritamente maior que o peso de Loppamir)?

Input
    A unica linha da entrada contém dois inteiros a e b (1 ≤ a ≤ b ≤ 10) - o peso de Samuelito e de Loppamir respectivamente.

Output
    Imprima um inteiro, denotando o número inteiro de anos que vai levar para que o peso de Samuelito seja 
    estritamente maior que o de Loppamir.
*/
int main() {

    int a, b, res = 0;

    cin >> a >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;
        res++;
    }

    cout << res;

    return 0;
}
