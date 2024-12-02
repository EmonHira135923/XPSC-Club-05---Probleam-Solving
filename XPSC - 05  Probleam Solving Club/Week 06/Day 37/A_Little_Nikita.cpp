#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    int n,m;
    cin >> n >> m;

    if(n==m) cout<<"YES"<<endl;

    else if(n<m) cout<<"NO"<<endl;

    else if(n>m)
    {
        if(n%2!=m%2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
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