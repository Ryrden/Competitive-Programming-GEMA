#include <bits/stdc++.h>
using namespace std;
/*
    Enunciado
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string num;

    cin >> num;
    int num_size = num.size();

    string string_max_num;
    string_max_num.push_back(num[0]);
    int max_num = -300;
    for (int i = 0; i < num_size; i++) {
        if ((int)(num[i+1]) != ((int)(num[i])+1) || (num[i+1] == '0' && num[i] != '9')) {
            string_max_num = "";
            continue;
        }
        string_max_num.push_back(num[i+1]);
        if (stoi(string_max_num) > max_num)
            max_num = stoi(string_max_num);
        
    }

    cout << max_num << "ok\n";

    return 0;
}
