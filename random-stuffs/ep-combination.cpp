#include <bits/stdc++.h>
using namespace std;

void combination(int arr[], int index, int x, int y) {
    static int count = 1;

    if (y < 0) {
        return;
    }

    if (y == 0) {
        cout << "Kombinasi ke " << count++ << ": ";
        for (int i = 0; i < index; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
        return;
    }

    int prev = (index == 0) ? 1 : arr[index - 1];

    for (int j = prev; j <= x; j++) {
        arr[index] = j;
        combination(arr, index + 1, x, y - j);
    }
}

void findCombination(int n, int m) {
    int arr[n];
    combination(arr, 0, n, m);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int M, N;
        cin >> M >> N;
        findCombination(N, M);
    }

    return 0;
}
