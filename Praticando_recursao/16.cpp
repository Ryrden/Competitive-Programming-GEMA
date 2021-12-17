#include <bits/stdc++.h>
using namespace std;

int fat(int n) {
    if (n == 1)
        return 1;
    return n * fat(n - 1);
}

int double_fat(int n) {
    if (n == 1 || n == 0)
        return 1;
    return n * double_fat(n - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    cout << double_fat(num) << endl;

    return 0;
}
