#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    auto check=[&](int median)
    {
        ll cnt=0;
        for(int i=(n/2);i<n;i++)
        {
            cnt+=(v[i]<median ? (median-v[i]) : 0);
        }
        return cnt<=k;
    };

    int l = 1,r = 2e9,mid,ans;

    while(l<=r)
    {
        mid = l+(r-l)/2;
        if(check(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    cout << ans << endl;

    return 0;
}
