#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        int x = s.size();
        cout << (x > 10 ? s[0] + to_string(x - 2) + s.back() : s) << endl;
    }
}