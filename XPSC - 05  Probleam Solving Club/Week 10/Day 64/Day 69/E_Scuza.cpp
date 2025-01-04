#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    vector<ll> pre(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(i==0) pre[i] = a[i];
        else pre[i] = pre[i-1] + a[i];
    }
    int maxx = INT_MIN;
    vector<int> mx(n);
    for(int i=0;i<n;i++)
    {
        maxx = max(maxx,a[i]);
        mx[i] = maxx;
    } 
    while(q--)
    {
        int k;
        cin >> k;
        int l = 0, r = n-1, mid;
        ll ans = 0; 
        while(l<=r)
        {
            mid = (l+r)/2;

            if(mx[mid]<=k)
            {
                ans = pre[mid];
                l = mid+1;
            }
            else r = mid-1;
        }
        cout << ans << " ";
    }
    cout << endl;
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