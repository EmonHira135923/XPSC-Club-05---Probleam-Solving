#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    ll b,c,d;
    cin >> b >> c >> d;
    ll a = (c^d);
    if( (a|b) - (a&c) == d) cout << a << endl;
    else cout << -1 << endl;
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