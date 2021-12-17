#include <bits/stdc++.h>
using namespace std;

int sumTo(int start, int end) {
    if (start == end)
        return end - start + 1;
    return start + sumTo(++start, end);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    cout << sumTo(1, num) << endl;

    return 0;
}
