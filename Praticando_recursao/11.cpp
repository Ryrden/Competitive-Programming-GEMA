#include <bits/stdc++.h>
using namespace std;

int multip_rec(int n1, int n2) {
    if (n2 == 0)
        return n2;
    return n1 + multip_rec(n1, --n2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n1,n2;
    cin >> n1 >> n2;

    cout << multip_rec(n1,n2) << endl;

    return 0;
}
