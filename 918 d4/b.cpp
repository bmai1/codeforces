#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int t;
    cin >> t;
    string s;
    unordered_map<char, int> m;
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> s;
            for (auto c : s) m[c]++;
            if (m['?']) {
                if (!m['A']) cout << 'A' << endl;
                if (!m['B']) cout << 'B' << endl;
                if (!m['C']) cout << 'C' << endl;
            }
            m.clear();
        }
    }
    // cout << solve();
}