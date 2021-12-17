#include <bits/stdc++.h>
using namespace std;

int fat(int n) {
    if (n == 1)
        return 1;
    return n * fat(n - 1);
}

int double_fat(int n) {
    if (n <= 1)
        return n;
    return n * double_fat(n - 2);
}

int quadruple_fat(int n) {
    return fat(2*n) / fat(n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    cout << quadruple_fat(num) << endl;

    return 0;
}
