#include <bits/stdc++.h>
using namespace std;

double pi = 3.14159;

int maior(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    cout << fixed << setprecision(3);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int maiorab = maior(a, b);

    cout << (maiorab > c ? maiorab : c) << " eh o maior" << '\n';

    return 0;
}
