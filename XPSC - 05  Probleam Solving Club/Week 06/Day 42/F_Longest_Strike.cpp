#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    deque<int> v(n);
    map<int, int> frq;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        frq[v[i]]++;
    }
    vector<int> uniq;
    for (auto x : frq) {
        if (x.second >= k) {
            uniq.push_back(x.first);
        }
    }
    if (uniq.empty()) {
        cout << -1 << endl;
        return;
    } else if (uniq.size() == 1) {
        cout << uniq[0] << " " << uniq[0] << endl;
        return;
    }
    priority_queue<pair<int, pair<int, int>>> pq;
    sort(uniq.begin(), uniq.end());
    int l = uniq[0];
    for (int i = 1; i < uniq.size(); i++) {
        if (uniq[i - 1] == uniq[i] - 1) {
            int dif = uniq[i] - l;
            pq.push({dif, {l, uniq[i]}});
        } else {
            l = uniq[i];
        }
    }
    if (!pq.empty()) {
        auto top = pq.top();
        pair<int, int> ans = top.second;
        cout << ans.first << " " << ans.second << endl;
    } else {
        cout << uniq[0] << " " << uniq[0] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
