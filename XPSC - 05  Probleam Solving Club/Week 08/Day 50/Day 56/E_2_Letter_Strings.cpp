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
    map<pair<char,char>,int> mp;
    for(char i='a';i<='k';i++)
    {
        for(char j='a';j<='k';j++)
        {
            mp[{i,j}]=0;
        }
    }
    vector<pair<char,char>> v(n);
    for(int i=0;i<n;i++)
    {
        char a,b;
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
        mp[{a,b}]++;
    }
    ll cnt = 0;
    for(int i=0;i<n;i++)
    {
        char x = v[i].first;
        char y = v[i].second;
        for(char i='a';i<='k';i++)
        {
            if(i!=y)
            {
                if(mp[{x,i}]!=0)
                {
                    cnt += mp[{x,i}];
                }
            }
        }
        for(char i='a';i<='k';i++)
        {
            if(i!=x)
            {
                if(mp[{i,y}]!=0)
                {
                    cnt += mp[{i,y}];
                }
            }
        }
    }
    cout << cnt/2 << endl;
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