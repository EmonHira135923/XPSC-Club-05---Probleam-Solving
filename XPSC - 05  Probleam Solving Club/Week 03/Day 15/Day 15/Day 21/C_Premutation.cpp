#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        vector<int> x;
        for(int j=0;j<(n-1);j++)
        {
            int a;
            cin>>a;
            x.push_back(a);
        }
        v.push_back(x);
    }
    
    int x = n-1;
    vector<map<int,int>> mp;

    for(int i=0;i<x;i++)
    {
        map<int,int> m;
        for(int j=0;j<v.size();j++)
        {
            m[v[j][i]]++;
        }
        mp.push_back(m);
    }

    vector<int> ans(n);
    int sz = mp.size();
    for(int i =0;i<(sz/2);i++)
    {

        vector<pair<int,int>> m;
        for(auto [d,e]:mp[i])
        {
            m.push_back({e,d});
        }

        sort(m.begin(),m.end());
        ans[i] = m[1].second;
        ans[i+1] = m[0].second;


        vector<pair<int,int>> z;
        for(auto [d,e]:mp[sz-i-1])
        {
            z.push_back({e,d});
        }

        sort(z.begin(),z.end());
        ans[n-i-1] = z[1].second;
        ans[n-i-2] = z[0].second;

    }

    for(int z:ans)
    {
        cout <<z<< " ";
    }
    cout<<endl;
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