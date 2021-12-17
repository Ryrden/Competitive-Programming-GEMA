#include <bits/stdc++.h>
using namespace std;

int frequency(string num, char digit) {
    int times = 0;
    if (num.size() == 1)
        return num[0] == digit ? 1 : 0;

    if (num[0] == digit) {
        times++;
        return times + frequency(num.substr(1, num.size()),digit);
    }
    return frequency(num.substr(1, num.size()),digit);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string num;
    char digit;

    cin >> num;
    cin >> digit;

    cout << frequency(num, digit) << endl;

    return 0;
}
