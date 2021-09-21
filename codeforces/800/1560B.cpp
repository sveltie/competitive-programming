/*  Codeforces problem set 1560 - B https://codeforces.com/contest/1560/problem/B
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17 7.3.0
    
    Time : 93 ms, Memory : 3700 KB  
    Big O Notation : O(N) */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    int a, b, c;
    
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
 
        int len = 2 * (abs(a - b) - 1) + 2;
 
        if (len < max(a, b) || len < c) {
            cout << -1 << endl;
        } else {
            int res;
            res = c + abs(a - b);
            
            if (res > abs(a - b) * 2) {
                res = c - abs(a - b);
            }
            
            cout << res << endl;
        }
    }
    
    return 0;
}
