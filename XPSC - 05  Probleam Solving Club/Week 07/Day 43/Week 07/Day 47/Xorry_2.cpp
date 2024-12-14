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
    vector<ll> pos;
    // ll x=0;
    for(ll i=32;i>=0;i--)
    {
        if((n>>i)&1)
        {
            pos.push_back(1);
        }
        else pos.push_back(0);
    }
    ll ones = 0, cnt = 0;
    for(int i=0;i<pos.size();i++)
    {
        if(pos[i]==1)
        {
            if(ones<2) ones++;
        }
        else if(pos[i]==0 && ones==2) cnt++;
    }
    
    ll x = (1<<cnt);
    
    
    cout << x << endl;
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