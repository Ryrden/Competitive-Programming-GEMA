#include <bits/stdc++.h>
using namespace std;

string fib_word(int n) {
    if (n == 0)
        return "b";
    else if (n == 1)
        return "a";
    return fib_word(n - 1) + fib_word(n - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    cout << fib_word(num) << endl;

    return 0;
}
