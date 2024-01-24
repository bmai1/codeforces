#include <bits/stdc++.h>
using namespace std;

string solve(int l1, int l2, int l3) {
    // sort
    if (l1 > l2) swap(l1, l2);
    if (l2 > l3) swap(l2, l3);
    if (l3 - l2 == l1) return "YES";

    if (l1 == l2 && l3 % 2 == 0) return "YES";
    if (l1 == l3 && l2 % 2 == 0) return "YES";
    if (l2 == l3 && l1 % 2 == 0) return "YES";
    
    return "NO";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int t;
    cin >> t;
    while (t--) {
        int l1, l2, l3;
        cin >> l1 >> l2 >> l3;
        cout << solve(l1, l2, l3) << endl;
    }

}