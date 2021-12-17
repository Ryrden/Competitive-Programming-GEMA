#include <bits/stdc++.h>
using namespace std;
#define END 15

void invert(int *vet, int start, int end) {
    if (end > start)
        return;
    swap(vet[start], vet[end - 1]);
    invert(vet, start, --end);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int vet[END];

    for (int i = 0; i < END; i++) {
        cin >> vet[i];
    }

    invert(vet, 0, END);
    for (int i = 0; i < END; i++) {
        cout << vet[i] << ' ' << endl;
    }

    return 0;
}
