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
        ll N,K;
        cin >> N >> K;
        ll sum = (2 * K + N - 1) * N / 2;
        ll l=1,r = N,mid,ans = LLONG_MAX;

        while(l<=r)
        {
            mid = l +(r-l)/2;


            ll cnt = mid * (2 * K + mid - 1) / 2;

            ll diff = abs(cnt - (sum - cnt));

            ans = min(ans, diff);

            if(cnt>sum/2)
            {
                r = mid - 1;
            }
            else l = mid+1;
        }

        cout << ans << endl;
    }

    return 0;
}