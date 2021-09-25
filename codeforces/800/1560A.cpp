/*  Codeforces problem set 1560 - A https://codeforces.com/contest/1560/problem/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17 7.3.0
    
    Time : 31 ms, Memory : 3700 KB  */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        int k;
        cin >> k;
        int res = 0, j = 0, a = 1;
 
        while (j < k) {
            if (a % 3 != 0 && a % 10 != 3) {
                res = a;
                j++;
            }
            
            a++;
        }
 
        cout << res << endl;
    }
 
    return 0;
}
