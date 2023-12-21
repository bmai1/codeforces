#include <bits/stdc++.h>
using namespace std;

string solve(int n) {
    return (n > 2 && n % 2 == 0) ? "YES" : "NO";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    cout << solve(n);
}