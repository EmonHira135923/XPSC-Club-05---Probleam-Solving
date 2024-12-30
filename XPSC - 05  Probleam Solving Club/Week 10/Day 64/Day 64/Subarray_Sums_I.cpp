#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    
    map<ll,ll> count_map;
    ll prefix_sum = 0;
    ll result = 0;
    
    for (int i = 0; i < n; i++) 
    {
        prefix_sum += a[i];
        
        if (prefix_sum == x) 
        {
            result++;
        }
        
        if (count_map.find(prefix_sum - x) != count_map.end()) 
        {
            result += count_map[prefix_sum - x];
        }
        
        count_map[prefix_sum]++;
    }
    
    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}