#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    ll n,m;
    cin >> n >> m;
    ll f = n-m;
    ll s = n+m;
    if(f<0) f = 0;
    ll ans = 0;
    for (int i = 31; i>=0;--i) 
    {
        if ((f & (1LL << i)) || (s & (1LL << i)) || (f >> (i + 1)) != (s >> (i + 1))) 
        {
            ans |= (1LL << i);
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}