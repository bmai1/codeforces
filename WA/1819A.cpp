// Constructive problem

#include <bits/stdc++.h>
using namespace std;

string solve(int n) {
    vector<int> a(n);
    unordered_map<int, int> m;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        m[a[i]]++;
    }

    if (!m[0]) return "Yes";

    for (int i = 1; i < n; ++i) {
        int l = min(a[i], a[i - 1]);
        int r = max(a[i], a[i - 1]);
        if (m[l] > 1) {
            for (int j = l + 1; j < r; ++j) {
                if (!m[j]) return "Yes";
            }
        }
    }

    return "No";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << solve(n) << endl;
    }
}