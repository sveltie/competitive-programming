/*  Codeforces problem set 59 - A https://codeforces.com/contest/158/problem/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17  
    
    Time : 62 ms, Memory : 3700 KB  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x, y, z;
    int sum_of_x = 0, sum_of_y = 0, sum_of_z = 0;

    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;

        sum_of_x += x;
        sum_of_y += y;
        sum_of_z += z;
    }

    if (sum_of_x == 0 && sum_of_y == 0 && sum_of_z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
