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
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    if(mp.size()==1)
    {
        cout<<"YES" << endl;
    }
    else if(mp.size()==2)
    {
        auto it = mp.find(0);

        if(it==mp.end())
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    else cout <<"NO" << endl;
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