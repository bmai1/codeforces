#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, s;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> s;
        string d = to_string(s);
        int curr = s, res = s, digit;
        while (curr > 0) {
            digit = pow(10, d.size() - 1);
            // cashback
            curr += digit * (d[0] - '0') / 10;
            res += digit * (d[0] - '0') / 10;
            // purchase burles
            curr -= digit * (d[0] - '0');
            d = to_string(curr);
        }
        cout << res << endl;
    }
    return 0;
}