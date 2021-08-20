#include <bits/stdc++.h>
using namespace std;
/*
Mitolau estava brincando com seus amiguinhos do famoso jogo "Pega Pega", porém Mitolau é famoso por ser muito inteligente 
(Humilhando os russos em provas da maratona) e por isso logo cansou-se dessa brincadeira tão facíl.

Por isso Mitolau decidiu participar de uma outra brincadeira: O Pega ou Não Pega. Apesar das similaridades 
no nome essa brincadeira é bem diferente da anterior. Nessa brincadeira Mitolau tem um vetor V de N elementos, 
cada elemento é um inteiro Vi sendo que todos os Vi são distintos. Mitolau então pensa em um número que ele gosta 
muito, o X. Após pensar nesse número ele tenta adivinhar de quantas maneiras ele consegue obter uma soma que seja 
igual a X, utilizando apenas valores do vetor e sem repetir elementos, ou seja, Mitolau gostaria de saber quantos 
conjuntos distintos S existem tal que:

Por exemplo, para o vetor V = [1, 2, 3, 4, 5, 6] e para X = 6 Mitolau consegue formar os conjuntos:

    [1, 5],
    [1, 2, 3],
    [2, 4],
    [6] 

Portanto a resposta são 4 conjuntos.

Infelizmente Mitolau não pode resolver esse problema agora pois o Lafonso passou coisas pra ele fazer, então sobrou pra você!

Dado o vetor e o número X que Mitolau pensou, descubra quantas maneiras são possíveis de se obter X a partir do vetor dado.

Input
    A primeira linha da entrada contém dois inteiros N (1 ≤ N ≤ 20) e X ( - 1000 ≤ X ≤ 1000) 
    A segunda linha contém N inteiros os elementos Vi do vetor ( - 1000 ≤ Vi ≤ 1000)

Output
    Imprima uma unica linha, o número de maneiras que Mitolau consegue formar X utilizando o vetor dado
*/

int vet[25];
int n, x;

int solve(int i, int cur_sum) {

    if (i == n) {
        //retorna 1 se cur_sum == x
        //retorna 0 se cur_sum != x

        return (cur_sum == x);
    }

    int ans = 0;

    //pega
    ans += solve(i + 1, cur_sum + vet[i]);

    // nao pega
    ans += solve(i + 1, cur_sum);

    return ans;
}

int main() {

    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    cout << solve(0, 0) << '\n';

    return 0;
}

//             (0,0)
//       (1,1)      (1,0)
//    (2,3)(2,1)  (2,2)(2,0)