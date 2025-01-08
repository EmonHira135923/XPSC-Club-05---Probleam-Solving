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

    int N,K;
    cin >> N >> K;

    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    auto ok = [&](ll secend)
    {
        ll cnt = 0;

        for(int i=0;i<N;i++)
        {
            cnt += (secend/myvalue[i]);

            if(cnt >= K)
            {
                return true;
            }
        }

        return cnt>=K;

    };

    ll l,r,mid,ans;

    l = 1,r = 1e18;

    while(l<=r)
    {
        mid = l + (r-l) / 2;

        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
           l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}