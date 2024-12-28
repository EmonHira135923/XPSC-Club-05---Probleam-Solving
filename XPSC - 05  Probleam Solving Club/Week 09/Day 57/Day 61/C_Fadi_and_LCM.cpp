#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
ll LCM(ll a,ll b)
{
    return ((a/__gcd(a,b))*b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    set<pair<ll,ll>> s;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ll j = n/i;
            if(i<j) s.insert({i,j});
            else s.insert({j,i});
        }
    }
    ll l = LLONG_MAX , r = LLONG_MAX;
    for(auto p:s)
    {
        ll x = p.first;
        ll y = p.second;
        if(y<r && LCM(x,y)==n)
        {
            l = x;
            r = y;
        }
    }
    cout << l << " " << r;
    return 0;
}