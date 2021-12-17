#include <bits/stdc++.h>
using namespace std;

int sumVector(int *vet, int tam) {
    if (tam == 1)
        return vet[0];
    return vet[0] + sumVector(++vet, --tam);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tam;
    cin >> tam;
    int *vetor = (int *)malloc(sizeof(int) * tam);

    for (int i = 0; i < tam; i++) {
        int num;
        cin >> vetor[i];
    }

    cout << sumVector(vetor, tam) << endl;
    return 0;
}
