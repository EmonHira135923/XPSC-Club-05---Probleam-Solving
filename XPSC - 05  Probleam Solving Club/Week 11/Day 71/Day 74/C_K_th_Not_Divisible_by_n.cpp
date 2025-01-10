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

    int t;
    cin >> t;

    while(t--)
    {
        int N,K;
        cin >> N >> K;

        auto ok = [&](int ans)
        {
            return ans - (ans/N) >= K;
        };

        int l,r,ans,mid;
        l=1,r=2e9;

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

    return 0;
}