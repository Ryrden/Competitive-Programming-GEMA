#include <bits/stdc++.h>
using namespace std;

string invert_num(string num) {
    string last_digit = "";
    last_digit = num.back();
    if (num.empty())
        return last_digit;
    num.pop_back();
    return last_digit + invert_num(num);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string num;

    cin >> num;
    cout << "inverted is:" << stol(invert_num(num)) << endl;

    return 0;
}
