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
        int N;
        cin >> N;

        vector<int> solve(N);
        for(int i=0;i<N;i++) cin >> solve[i];

        sort(solve.begin(),solve.end());

        auto ok = [&](int time)
        {
            int l,cnt;
            cnt = 1,l=0;

            for(int r=0;r<N;r++)
            {
                if(solve[r]-solve[l]>2*time)
                {
                    l = r;
                    cnt++;
                }
            }
            return cnt <= 3;
        };

        int l,r,ans,mid;

        l = 0, r = 1e9;

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