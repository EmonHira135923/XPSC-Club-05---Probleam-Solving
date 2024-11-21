#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0;i < n;i++) 
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    long long sum = 0, ans = 0;
    while (r < n) 
    {
        sum += a[r];
        if (sum <= k)
        {
            ans += (r - l + 1);
        }
        else 
        {
            while (sum > k && l <= r) 
            {
                sum -= a[l];
                l++;
            }
            if (sum <= k) 
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}