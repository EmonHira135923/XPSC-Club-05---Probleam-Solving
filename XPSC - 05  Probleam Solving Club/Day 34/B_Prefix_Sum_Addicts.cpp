#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int n,k;
    cin >> n >> k;

    vector<ll> s(n+1);
    for(int i = n-k+1;i <= n;i++)
    {
        cin>>s[i];
    }

    vector<ll> a(n+1);
    if(n==1 || k==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i = n; i >= n-k+2;i--)
    {
        a[i]=s[i]-s[i-1];
    }
    bool flag=true;
    for(int i=n-k+2;i<=n;i++)
    {
        if(i+1<=n && a[i+1]<a[i])
        {
            flag=false;
            break;
        }
    }

    if(!flag)
    {
        cout<<"NO"<<endl;
        return;
    }

    for(int i=n-k+1;i>1;i--)
    {
        a[i]=a[i+1];
        s[i-1]=s[i]-a[i];
    }
    a[1]=s[1];

    for(int i=1;i<=n;i++)
    {
        if(i+1<=n && a[i+1]<a[i])
        {
            flag=false;
            break;
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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