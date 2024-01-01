#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

int n;
vector<pair<int,int>> a;
ordered_set s;

void solve() {
    cin >> n;
    
    s.clear();
    a.assign(n, {});
    long long res = 0;

    for (auto &p : a) {
        cin >> p.second >> p.first;
    }

    sort(a.begin(), a.end());

    for (auto p : a) {
        res += s.size() - s.order_of_key(p.second);
        s.insert(p.second);
    }

    cout << res << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
}