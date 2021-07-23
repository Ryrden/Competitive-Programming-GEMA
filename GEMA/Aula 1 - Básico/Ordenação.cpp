#include <bits/stdc++.h>
using namespace std;

/*
Creber e seu amigo Ediosvaldo caminhavam alegremente pela praia, nesse dia ensolarado.
Ao caminharem na areia, notaram que haviam tr�s n�meros desenhados nela. Todos os dias a dupla de amigos ia na praia no mesmo
hor�rio e sempre avistavam tr�s n�meros desenhados no mesmo local. Eles come�aram a se perguntar se havia alguma mensagem secreta
por tr�s desses n�meros misteriosos. Creber convenceu seu amigo de que apenas quando eles ordenassem os valores � que descobririam a
verdade. Como Ediosvaldo e Creber n�o s�o muito bons com ordena��o, eles decidiram pedir a voc� que resolva esse problema!

Dado tr�s valores na entrada, imprima na sa�da os tr�s valores ordenados de maneira decrescente (Para melhor entendimento do problema, olhem os casos de teste)

Input
Na entrada ser�o dados 3 valores inteiros, um por linha, indicando os n�meros vistos por Creber e Ediosvaldo. Cada valor ir� de -1000 at� 1000

Output
A sa�da deve ser composta por 3 n�meros inteiros, um por linha, os n�meros dados na entrada ordenados decrescentemente.
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
