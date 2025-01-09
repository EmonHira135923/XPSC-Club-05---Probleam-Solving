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

    string A,B;
    cin >> A >> B;

    int N = A.size();
    int M = B.size();

    vector<int> value(N);
    for(int i=0;i<N;i++)
    {
        cin >> value[i];
        value[i]--;
    }

    auto ok = [&](int time)
    {
        vector<bool> ans(N);

        for(int i=0;i<time;i++)
        {
            ans[value[i]] = true;
        }
        int j = 0;

        for(int i=0;i<N;i++)
        {
            if(!ans[i] && A[i] == B[j] )
            {
                j++;
            }
            if(j==M) return true;
        }
        return false;
    };

    int l,r,ans=0,mid;
    l = 0,r=N-1;

    while(l<=r)
    {
        mid = l + (r-l) / 2;

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