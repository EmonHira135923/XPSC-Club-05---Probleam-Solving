#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
        ll n;
        cin >> n;

        ll x = 0;
        for(ll i=32;i>=0;i--)
        {
            if(( n >> i) & 1)
            {
                x = ( 1 << i);
                break;
            }
        }
        ll y = n - x;
        if(x < y) cout << x << " " << y << endl;
        else cout << y << " " << x << endl;
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