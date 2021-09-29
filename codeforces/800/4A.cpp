/*  Codeforces problem set 4 - A https://codeforces.com/problemset/problem/4/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17  
    
    Time : 60 ms, Memory : 3700 KB  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int w;
    cin >> w;

    if (w % 2 == 0 && w / 2 != 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
