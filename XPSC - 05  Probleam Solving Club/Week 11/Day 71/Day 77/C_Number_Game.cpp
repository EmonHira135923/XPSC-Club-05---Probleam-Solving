#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    multiset<int> ml;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    auto check=[&](int k)
    {
        multiset<int> x;
        x = ml;
        for(int i=1;i<=k;i++)
        {
            if(x.empty()) return false;
            int target = k-i+1;
            auto it = x.upper_bound(target);
            if(it==x.begin())
            {
                return false;
            }
            else
            {
                --it;
                x.erase(it);

            }
            if(!x.empty())
            {
                auto it=x.begin();
                int val=*it;
                x.erase(it);
                x.insert(val+target);
            }
        }
        return true;
    };

    int l=0,r=101,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(check(mid))
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
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}