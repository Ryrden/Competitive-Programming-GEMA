#include <bits/stdc++.h>
using namespace std;

void printTo(int num) {
    if (num == 0) {
        cout << "0 " << flush;
        return;
    }
    cout << num << ' ' << flush;
    printTo(num - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    printTo(num);

    return 0;
}
