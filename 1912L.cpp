#include <bits/stdc++.h>
using namespace std;

int solve(int n, string s) {
    for (int i = 0; i < n; ++i) {
        int arr[4] = {0};
        for (int j = 0; j < i; ++j) {
            arr[0] += s[j] == 'L';
            arr[1] += s[j] == 'O';
        }
        for (int j = i; j < n; ++j) {
            arr[2] += s[j] == 'L';
            arr[3] += s[j] == 'O';
        }
        if ((arr[0] + arr[1]) && (arr[2] + arr[3]) && arr[0] != arr[2] && arr[1] != arr[3]) return i;
    }
    return -1;
}

int main() {
    // delete this in submission
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    string s;

    // cin >> n >> s;
    // cout << solve(n, s);
    while (cin >> n >> s) {
        cout << solve(n, s) << endl;
    }

    return 0;
}