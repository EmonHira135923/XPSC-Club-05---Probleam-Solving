#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    ll totalWays = 0;
    int count = 0;


    for (int i = 0; i < n; i++) 
    {
        if (a[i] <= q) 
        {
            count++;
        } 
        else 
        {
            if (count >= k) 
            {
                ll x = count - k + 1;
                totalWays += x * (x + 1) / 2;
            }
            count = 0;
        }
    }
    if (count >= k) 
    {
        ll x = count - k + 1;
        totalWays += x * (x + 1) / 2;
    }

    cout << totalWays << endl;
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