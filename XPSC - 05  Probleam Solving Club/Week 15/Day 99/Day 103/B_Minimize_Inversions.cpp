#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{

    int n;
    cin >> n;

    vector<pair<int,int>> v(n);
    for(auto &x : v) cin >> x.first;
    for(auto &x : v) cin >> x.second;
    
    sort(v.begin(),v.end());

    for(auto x : v) cout << x.first << " ";
    cout << endl;
    
    for(auto x: v) cout << x.second << " ";
    cout << endl;

}

int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}