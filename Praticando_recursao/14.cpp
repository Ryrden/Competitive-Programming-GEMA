#include <bits/stdc++.h>
using namespace std;

void printTo(int num) {
    if (num == 0) {
        cout << "0 " << flush;
        return;
    }
    printTo(num - 1);
    if (num % 2 == 0)
        cout << num << ' ' << flush;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    printTo(num);

    return 0;
}
