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
    int a[n];
    int mx = 0,x = 0;
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        ans += max(0,mx-a[i]);
        x = max(x,mx-a[i]);
        mx = max(mx,a[i]);
    }
    cout << ans+x << endl;

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