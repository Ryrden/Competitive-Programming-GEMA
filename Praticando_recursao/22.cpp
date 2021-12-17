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

long long int tetra_fib(int n) {
    if (n <= 2)
        return 0;
    else if (n == 3)
        return 1;
    return tetra_fib(n - 1) + tetra_fib(n - 2) + tetra_fib(n - 3) + tetra_fib(n - 4);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    cout << tetra_fib(num) << endl;

    return 0;
}
