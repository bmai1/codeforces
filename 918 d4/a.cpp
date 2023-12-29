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
    int a, b, c;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c;
        if (a == b) cout << c << endl;
        else if (a == c) cout << b << endl;
        else if (b == c) cout << a << endl;
    }
    // cout << solve();
}