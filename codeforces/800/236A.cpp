/*  Codeforces problem set 236 - A https://codeforces.com/contest/236/problem/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17  
    
    Time : 62 ms, Memory : 3700 KB  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int count = 0, k = 1;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }

        if (count == 0) {
            k++;
        }

        count = 0;
    }

    if (k % 2 == 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
