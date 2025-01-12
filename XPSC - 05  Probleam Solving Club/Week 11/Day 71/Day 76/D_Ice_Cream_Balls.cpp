#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    ll N;
    cin >> N;

    if(N==1)
    {
        cout << "2" << endl;
        return;
    }

    auto ok = [&](ll ball)
    {
        ll type = (ball*(ball-1))/2;

        return type <= N;
    };

    ll l,r,ans,mid;
    l = 0,r=1e10;

    while(l<=r)
    {
        mid = l + (r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1 ;
    }

    ll val = (ans*(ans-1))/2;
    ans += (N-val);

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