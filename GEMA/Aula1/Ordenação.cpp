#include <bits/stdc++.h>
using namespace std;

/*
Creber e seu amigo Ediosvaldo caminhavam alegremente pela praia, nesse dia ensolarado. Ao caminharem na areia, notaram que 
haviam três números desenhados nela. Todos os dias a dupla de amigos ia na praia no mesmo horário e sempre avistavam três 
números desenhados no mesmo local. Eles começaram a se perguntar se havia alguma mensagem secreta por trás desses números 
misteriosos. Creber convenceu seu amigo de que apenas quando eles ordenassem os valores é que descobririam a verdade. 
Como Ediosvaldo e Creber não são muito bons com ordenação, eles decidiram pedir a você que resolva esse problema!

Dado três valores na entrada, imprima na saída os três valores ordenados de maneira decrescente 
(Para melhor entendimento do problema, olhem os casos de teste)

Input
Na entrada serão dados 3 valores inteiros, um por linha, indicando os números vistos por Creber e Ediosvaldo. 
Cada valor irá de -1000 até 1000

Output
A saída deve ser composta por 3 números inteiros, um por linha, os números dados na entrada ordenados decrescentemente.
*/

int main(){

    int a, b, c, aux;

    cin >> a >> b >> c;
	vector<int> ord = {a,b,c};


	for (int j = 0; j < 3; j++){

        for(int k = j+1; k < 3; k++){

            if (ord[j] < ord[k]){

                aux = ord[j];
                ord[j] = ord[k];
                ord[k] = aux;
            }
        }
    }

	cout << ord[0] << '\n' << ord[1] << '\n' << ord[2] << '\n';


 return 0;
}
