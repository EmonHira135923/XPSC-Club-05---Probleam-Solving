#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long a[n];
    ll c = 1, b = 0, ans, sum = 0;
    for(int i=0;i<n;i++) cin>>a[i];
    
    if(n==1)
    {
        cout << 1 << endl;
        return;
    }

    sort(a, a + n);

    for(int i = 0; i < n; i++)
    {
        b = __gcd(b, a[n-1] - a[i]);
    } 
        
    for(int i = 0; i < n; i++)
    {
        sum += (a[n-1] - a[i]) / b;
    } 
    
    ans = a[n-1] - b;

    for(int i = n-2; i >= 0; i--)
    {
        if(ans != a[i]) break;
        ans -= b;
        c++;
    }

    cout << sum + c << endl;
}

int main()
{
    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
