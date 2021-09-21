/*  Codeforces problem set 59 - A https://codeforces.com/contest/59/problem/A
    Using WSL Ubuntu 20.04.3 LTS
    GNU C++17  
    
    Time : 62 ms, Memory : 3700 KB  
    Big O Notation : O(N²) */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s, s_upper, s_lower, res;
 
    cin >> s;
 
    int N = s.size();
 
    for (int i = 0; i < N; i++) {
        if (isupper(s[i])) {
            s_upper += s[i];
        } else {
            s_lower += s[i];
        }
    }
 
    for (int j = 0; j < N; j++) {
        if (s_upper.size() > s_lower.size()) {
            res += toupper(s[j]);
        } else {
            res += tolower(s[j]);
        }
    }
 
    cout << res << endl;
 
    return 0;
}
