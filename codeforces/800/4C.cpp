/*  Codeforces problem set 59 - A https://codeforces.com/contest/158/problem/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17  
    
    Time : 820 ms, Memory : 4600 KB  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n;

    map<string, int> db;

    for (int i = 0; i < n; i++) {
        cin >> s;

        if (db.count(s) == 0) {
            cout << "OK" << endl;
            db[s] = 1;
        } else {
            cout << s << db[s] << endl;
            db[s]++;
        }
    }

    return 0;
}
