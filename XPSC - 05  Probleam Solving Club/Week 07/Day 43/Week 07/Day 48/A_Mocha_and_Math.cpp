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
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        mn = min(mn,v[i]);
    }
    int ans = mn;
    for(int i=0;i<n;i++)
    {
        ans &= v[i];
    }
    cout << ans << endl;
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