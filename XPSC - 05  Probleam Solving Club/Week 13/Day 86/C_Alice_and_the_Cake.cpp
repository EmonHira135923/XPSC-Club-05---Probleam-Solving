#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    multiset<ll> s;
    ll ss = 0;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
        ss += x;
    }    
 
    queue<ll> q;
    q.push(ss);
    while(!q.empty())
    {
        ll x = q.front();
        q.pop();
        if(s.count(x))
        {
            s.erase(s.find(x));
        }
        else
        {
            q.push(x/2);
            q.push(x-(x/2));
        }
 
        if(q.size()>n) break;
    }
 
    if(q.size()) cout << "NO" << endl;
    else cout <<"YES" << endl;
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
