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
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        v[i]=(a[i]-b[i]);
    }
    int cnt = 0;
    sort(v.begin(),v.end(),greater<int>());
    int i = 0,j = n-1;
    while(i<j)
    {
        if(v[i]+v[j]>0) i++;
        else if(v[i]+v[j]<=0)
        {
            cnt++;
            i++;
            j--;
        }
    }
    cout << cnt << endl;
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