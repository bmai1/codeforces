#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    int n, a, b;
    for (int i = 0; i < t; ++i) {
        vector<pair<int, int>> ab;
        int greetings = 0;
        cin >> n; 
        for (int j = 0; j < n; ++j) {
            cin >> a >> b;
            ab.push_back({a, b});
        }
        sort(ab.begin(), ab.end(), [](pair<int, int> &x, pair<int, int>& y) {
            return x.first < y.first;
        });
        for (int j = 0; j < ab.size(); ++j) {
            for (int k = j + 1; k < ab.size(); ++k) {
                if (ab[k].second <= ab[j].second) {
                    ++greetings;
                }
            }
        }
        cout << greetings << endl;
    }
    // cout << solve();
}