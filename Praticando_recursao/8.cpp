#include <bits/stdc++.h>
using namespace std;

int mdc(int x, int y) {
    if (y == 0)
        return x;
    else
        return mdc(y, x % y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n1, n2;

    cin >> n1 >> n2;

    cout << mdc(n1, n2) << endl;

    return 0;
}