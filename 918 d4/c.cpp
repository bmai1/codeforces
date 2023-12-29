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
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            int in;
            cin >> in;
            sum += in;
        }
        int s = sqrt(sum);
        if (s * s == sum) cout << "YES";
        else cout << "NO";
        cout << endl;

    }
}