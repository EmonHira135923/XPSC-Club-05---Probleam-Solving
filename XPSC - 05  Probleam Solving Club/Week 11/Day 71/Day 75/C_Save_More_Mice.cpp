#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll N, K;
        cin >> N >> K;

        vector<ll> myvalue(K);
        for(ll i = 0; i < K; i++) cin >> myvalue[i];

        sort(myvalue.begin(), myvalue.end());

        ll l = 0, r = K, ans = 0;


        while(l <= r)
        {
            ll mid = l + (r - l) / 2;

            ll cat_pos = 0, cnt = 0;

            for(ll i = K - 1; i >= K - mid; i--)
            {
                if(myvalue[i] > cat_pos)
                {
                    cnt++;
                    cat_pos += (N - myvalue[i]);
                }
                else break;
            }
            
            if(cnt == mid) 
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
