#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum += v[i];
    }
    ll mx = INT_MIN;
    ll running = 0;
    for(int i=0;i<n-1;i++)
    {
        running += v[i];
        mx = max(mx,__gcd(running,sum-running));
    }
    cout << mx << endl;
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