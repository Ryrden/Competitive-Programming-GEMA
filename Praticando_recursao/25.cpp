#include <bits/stdc++.h>
using namespace std;

long long int padovan_sequence(int n) {
    if (n <= 2)
        return 1;
    return padovan_sequence(n - 2) + padovan_sequence(n - 3);
}

long long int pell_number(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    return 2 * pell_number(n - 1) + pell_number(n - 2);
}

long long int catalan_number(int n){
    if (n == 0)
        return 1;
    return (2*(2*n-1)*catalan_number(n-1))/(n+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    cout << catalan_number(num) << endl;

    return 0;
}
