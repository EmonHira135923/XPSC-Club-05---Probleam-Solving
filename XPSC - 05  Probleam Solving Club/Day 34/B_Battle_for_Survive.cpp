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

    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    } 

    ll sum=0;
    for(ll i=0;i<n-2;i++)
    {
        sum+=v[i];
    }

    v[n-2]-=sum;
    v[n-1]-=v[n-2];

    cout<<v[n-1]<<endl;
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