#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    ll a,b;
    cin >> a >> b;

    if(b==1) cout << "NO" << endl;
    else
    {
        ll x,y,z;
        x = a;
        y = a*b;
        z = a*(b+1);

        cout << "YES" << endl;

        cout << x << " " << y << " " << z << endl;
    }
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