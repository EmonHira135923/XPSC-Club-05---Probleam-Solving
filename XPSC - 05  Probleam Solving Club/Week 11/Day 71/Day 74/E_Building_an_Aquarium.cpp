#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    ll N,K;
    cin >> N >> K;

    vector<ll> value(N);
    for(ll i=0;i<N;i++) cin >> value[i];

    sort(value.begin(),value.end());

    auto ok = [&](ll height)
    {
        ll cnt = 0;

        for(ll i=0;i<N;i++)
        {
            if(value[i]<height)
            {
                cnt += (height - value[i]);
            }
        }

        return cnt <= K;
    };

    ll l,r,ans,mid;
    l = 1,r=2e9;

    while(l<=r)
    {
        mid = l+(r-l)/2;

        if(ok(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    cout << ans << endl;

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