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
    deque<ll> ans;
    for (int k = 0;k<=__lg(n);k++) 
    {
        if ((n>>k)&1) 
        {
            ll value = n - (1LL<<k);
            if(value>0) ans.push_front(value);
        }
    }
    ans.push_back(n);
    cout << ans.size() << endl;
    for (auto x:ans) 
    {
        cout << x << " ";
    }
    cout << endl;
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