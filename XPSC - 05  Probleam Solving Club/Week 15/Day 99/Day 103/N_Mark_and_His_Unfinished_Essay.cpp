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
const ll N = 46;
void solve()
{
    ll n, c, q;
    ll l[N], r[N];
    ll d[N];
    cin >> n >> c >> q;

    string s, tt;
    tt += '0';
    cin >> s;
    tt += s;
    r[0] = n+1;
    for(int i=1;i<=c;i++)
    {
        ll le, re;
        cin >> le >> re;
        l[i] = r[i - 1];
        r[i] = l[i] + re - le + 1;
        d[i] = l[i] - le;
    }
    while (q--)
    {
        ll k;
        cin >> k;

        for (int i = c; i >= 1; i--)
        {
            if (k >= l[i])k -= d[i];
            else continue;
        }
        cout << tt[k]  << endl;
    }
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