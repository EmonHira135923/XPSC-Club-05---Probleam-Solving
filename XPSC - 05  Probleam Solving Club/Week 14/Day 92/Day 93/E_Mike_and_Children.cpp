#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n;  
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    map<int, int> mp;
    int mx = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            mp[v[i]+v[j]]++;
            mx = max(mx, mp[v[i]+v[j]]);
        }
    }
    cout << mx << "\n";

}

int main()
{

    FASTIO;
    
    int t;
    t = 1;
    while(t--)
    {
        solve();
    }

    return 0;
}