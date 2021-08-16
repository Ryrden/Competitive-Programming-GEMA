#include <bits/stdc++.h>
using namespace std;
/*
Para te dar as boas vindas ao ICMC, alguns membros do grupo de estudos para a maratona (GEMA) decidiram 
se divertir aprendendo a fazer problemas interativos. Obviamente a cobaia é você.

Esse é um problema interativo. Você deverá advinhar um número, n (1 ≤ n ≤ 10), escolhido por nosso programa. 
Seu programa deverá imprimir um número que acredita ser esse número escolhido. Para cada chute, o programa corretor 
irá dizer se o chute é maior, menor que ou igual ao número escolhido. Você tem quatro tentativas.

Interaction
    Você deve seguir o seguinte protocolo de interação

    Imprimir um número (o chute do seu programa)
    Logo após o chute do seu programa, utilize o comando fflush(stdout);
    Após o fflush, ler a resposta do corretor: 1 se maior, 0 se menor e 2 se igual. Se o número estiver certo, 
    seu programa não deverá fazer mais chutes e devera terminar a execução 
*/

/***OBS
    - 0 significa que a resposta certa é **menor** que seu chute
    - 1 significa que a resposta certa é **maior** que seu chute
    - 2 significa que você acertou
*/
void QualNumero(int min, int max, int res) {

    int meio = 0;

    while (res != 2) {
        meio = (max + min) / 2;
        cout << meio << '\n';
        fflush(stdout);

        cin >> res;

        if (res) {
            min = meio + 1;
        } else {
            max = meio - 1;
        }
    }
}

int main() {

    int res = 1;
    int min = 1, max = 10; // [1,10]

    QualNumero(min, max, res);

    return 0;
}
