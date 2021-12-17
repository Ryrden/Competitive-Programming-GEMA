#include <bits/stdc++.h>
using namespace std;

long powerTo(int num, int exp) {
    if (exp == 0)
        return 1;
    return num * powerTo(num, --exp);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    int exp;

    cin >> num >> exp;

    cout << powerTo(num, exp) << endl;
    return 0;
}
