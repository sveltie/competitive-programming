/*  Codeforces problem set 546 - A https://codeforces.com/problemset/problem/546/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17  
    
    Time : 31 ms, Memory : 3600 KB  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, w, res, cost = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++) {
        cost += i * k;
    }

    res = cost - n;

    if (res <= 0) {
        cout << 0 << endl;
    } else {
        cout << res << endl;
    }

    return 0;
}
