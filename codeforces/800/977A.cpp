/*  Codeforces problem set 977 - A https://codeforces.com/problemset/problem/977/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17  
    
    Time : 15 ms, Memory : 3700 KB  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 != 0) {
            n -= 1;
        } else if (n % 10 == 0) {
            n /= 10;
        }
    }

    cout << n << endl;

    return 0;
}
