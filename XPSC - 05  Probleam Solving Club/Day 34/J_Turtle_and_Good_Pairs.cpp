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
    string s;
    cin >> s;

    map<char,ll> mp;
    for(ll i=0;i<n;i++)
    {
        mp[s[i]]++;
    }

    priority_queue<pair<ll,char>> pq;
    for(auto [x,y]:mp)
    {
        pq.push({y,x});
    }

    string ans(n,'0');
    ll idx=0;

    while(!pq.empty())
    {
        auto p=pq.top();
        pq.pop();

        ll cnt=p.first;
        char c=p.second;

        while(cnt--)
        {
            if(idx>=n) idx=1;
            ans[idx]=c;
            idx+=2;
        }
    }

    cout<<ans<<endl;
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