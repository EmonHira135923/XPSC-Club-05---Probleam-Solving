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
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    
    ll red = n/a;
    ll blue = n/b;
    ll combined = n/LCM(a,b);

    red -= combined;
    blue -= combined;

    ll ans = (red*p)+(blue*q);

    ll mx = max(p,q);
    ans += (combined*mx);

    cout << ans << endl;
    return 0;
}
