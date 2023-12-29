#include <bits/stdc++.h>
using namespace std;

bool isC(char c) {
    return c == 'b' || c == 'c' || c == 'd';
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
    string s;

    for (int i = 0; i < t; ++i) {
        string res;
        cin >> n;
        cin >> s;
        for (int j = 0; j < n; ++j) {
            res += s[j];
            // don't need end split
            if (j < n - 3) {
                // need CVC if double C
                if (isC(s[j + 3])) {
                    res += s[++j];
                    res += s[++j];
                }
                else res += s[++j];
                res += '.';
            }
        }
        cout << res << endl;
    }
    // cout << solve();
}