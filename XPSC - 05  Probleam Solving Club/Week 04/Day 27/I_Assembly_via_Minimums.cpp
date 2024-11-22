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
    int m=(n*(n-1))/2;
    vector<int> v(m);
    int mx=INT_MIN;
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
        mx=max(mx,v[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;)
    {
        cout<<v[i]<<" ";
        n--;
        i+=n;
    }
    cout<<mx<<endl;
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