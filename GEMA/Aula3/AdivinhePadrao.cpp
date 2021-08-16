#include <bits/stdc++.h>
using namespace std;
/*
Junão, em uma bela tarde de sol, avistou no parque em frente a sua casa N × M arvores de diferentes alturas. 
O mais estranho de tudo é que elas estavam plantadas no centro de quadrados igualmente espaçados. Junão sendo 
um cara que adora ver problemas onde não tem, resolveu descobrir se todas as fileiras de arvores seguiam um 
padrão em suas alturas.

Para Junão, uma fileira de arvores são todas as arvores plantadas na mesma linha vertical começando do topo.

Para Junão, um padrão existe se:

    Para toda arvore i localizada na fileira j, i é estritamente maior que a arvore i - 1 localizada na mesma fileira,
    Para toda arvore i localizada na fileira j, i é estritamente menor que a arvore i - 1 localizada na mesma fileira,
    Para toda arvore i localizada na fileira j, i é do mesmo tamanho de todas as arvores localizadas na mesma fileira, 

A primeira arvore do topo de cada fileira é a arvore 1, a segunda é a arvore 2 e assim por diante. Você consegue ajudar 
Junão? Dada a matriz que representa a altura das arvores plantadas, diga para cada fileira se ela segue um padrão ou não.

Input
    A primeira linha da entrada contém dois inteiros N e M (1 ≤ N, M ≤ 100) 
    indicando respectivamente, quantas arvores tem em uma fileira e quantas fileiras existem.

    As próximas N linhas cada uma possui M inteiros. O j-ésimo inteiro na i-ésima linha indica a 
    altura da arvore na posição i da fileira j (1 ≤  altura de uma arvore  ≤ 10^15)

Output
    Para cada uma das M fileiras imprima na linha i "S" (sem aspas) caso a fileira i siga um padrão ou "N" (sem aspas) caso contrario.
*/

void AdivinhaPadrao(int n, int m, long long row[105][105]) {

    for (int i = 0; i < m; i++) {
        int flag = 1;
        if (row[1][i] == row[0][i]) {
            for (int j = 1; j < n; j++) {
                if (row[j][i] != row[j - 1][i]) {
                    flag = 0;
                    break;
                }
            }
        } else if (row[1][i] > row[0][i]) {
            for (int j = 1; j < n; j++) {
                if (row[j][i] <= row[j - 1][i]) {
                    flag = 0;
                    break;
                }
            }
        } else {
            for (int j = 1; j < n; j++) {
                if (row[j][i] >= row[j - 1][i]) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag) {
            cout << 'S' << ' ' << '\n';
        } else {
            cout << 'N' << ' ' << '\n';
        }
    }
}

int main() {
    
    long long alt[105][105];
    int n, m;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> alt[i][j];
        }
    }

    AdivinhaPadrao(n, m, alt);

    return 0;
}
