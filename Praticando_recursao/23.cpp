#include <bits/stdc++.h>
using namespace std;

long long int padovan_sequence(int n) {
    if (n <= 2)
        return 1;
    return padovan_sequence(n - 2) + padovan_sequence(n - 3);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    cout << padovan_sequence(num) << endl;

    return 0;
}
