#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void solve() 
{
    ll n;
    cin >> n;
    vector<ll> myvalue(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> myvalue[i];
    }

    ll total_sum = accumulate(myvalue.begin(), myvalue.end(), 0LL);
    ll min_diff = LLONG_MAX;

    for(int mask = 0; mask < (1 << n); mask++) 
    {
        ll group1_sum = 0;
        for(int i = 0; i < n; i++) 
        {
            if(mask & (1 << i)) 
            {
                group1_sum += myvalue[i];
            }
        }

        ll group2_sum = total_sum - group1_sum;
        ll diff = abs(group1_sum - group2_sum);
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
