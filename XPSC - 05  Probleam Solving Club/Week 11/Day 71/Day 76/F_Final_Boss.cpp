#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int a,b;
    cin >> a >> b;

    vector<ll>value(b),myvalue(b);

    for(int i=0;i<b;i++) cin >> value[i];
    for(int i=0;i<b;i++) cin >> myvalue[i];

    auto ok = [&](ll trun)
    {
        ll cnt_a = 0;
        for(int i=0;i<b;i++)
        {
            ll cnt = ceil(trun * 1.0/myvalue[i]);
            if(cnt>=a) return true;
            cnt_a +=  (cnt*value[i]);
        }
        return cnt_a >= a;
    };

    ll l,r,ans,mid;
    l = 1,r=4e10;

    while(l<=r)
    {
        mid = l+(r-l)/2;

        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
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