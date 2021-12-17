#include <bits/stdc++.h>
using namespace std;

long long int fib(int n) {
    if (n <= 1)
        return 0;
    else if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

long long int tri_fib(int n) {
    if (n <= 1)
        return 0;
    else if (n == 2)
        return 1;
    return tri_fib(n - 1) + tri_fib(n - 2) + tri_fib(n - 3);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    cout << tri_fib(num) << endl;

    return 0;
}
