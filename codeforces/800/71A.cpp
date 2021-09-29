/*  Codeforces problem set 71 - A https://codeforces.com/problemset/problem/71/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17  
    
    Time : 31 ms, Memory : 3700 KB  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s, res;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        int count = 1, k = s.size();

        if (k > 10) {
            for (int j = 1; j < k; j++) {
                count++;
            }

            cout << s[0] << count - 2 << s[k - 1] << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}
