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
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N=1e6+9;
int a[N];

void solve()
{

    int n;
    cin >> n;
    pbds<int> ar;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        ar.insert(x);
    }

    ll ans = 0;

    pbds<int> s;
    for (int i = n; i >= 1; i--)
    {
        int cnt = s.order_of_key(a[i]);
        s.insert(a[i]);
        ar.erase(a[i]);
        int ok = ar.order_of_key(a[i]);
        ok = (i - 1) - ok;
        ans+= (1ll*cnt * ok);
    }
    
    cout << ans << endl;

}
int main()
{

    FASTIO;

    solve();

    return 0;
}