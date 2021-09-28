/*  Codeforces problem set 59 - A https://codeforces.com/contest/158/problem/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17  
    
    Time : 62 ms, Memory : 3700 KB  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, j = 0;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] >= arr[k - 1] && arr[i] > 0) {
            j++;
        }
    }

    cout << j << endl;

    return 0;
}
