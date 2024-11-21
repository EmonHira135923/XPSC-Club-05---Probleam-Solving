#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    ll n, s;
    cin >> n >> s;
    
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    
    ll left = 0, sum = 0, minLength = LLONG_MAX;
    
    for(ll right = 0; right < n; right++) 
    {
        sum += a[right];
        while(sum >= s) 
        {
            minLength = min(minLength, right - left + 1);
            sum -= a[left];
            left++;
        }
    }
    
    if(minLength == LLONG_MAX) 
    {
        cout << -1 << endl;
    } 
    else 
    {
        cout << minLength << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
