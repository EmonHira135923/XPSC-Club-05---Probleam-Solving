#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll K,N;
    cin >> K >> N;

    vector<ll> value(N);
    for(ll i=0;i<N;i++) cin >> value[i];


    auto ok = [&](ll val)
    {
        ll total = 0;

        for(ll i=0;i<N;i++)
        {
            total += min(value[i],val);
        }
        return total >= val * K;
    };

    ll l,r,ans,mid;
    ans = 0;
    l = 0,r = 1e18/K;



    while(l<=r)
    {
        mid = l + (r-l)/2;

        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << ans << endl;

    return 0;
}