#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
const int B = 30;
using namespace std;

void solve() 
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> bits(B+1);
    for(int i=0;i<n;i++)
    {
        for(int k=B;k>=0;k--)
        {
            if((v[i]>>k)&1)
            {
                bits[k]++;
            }
        }
    }
    ll ans = 0;
    for(int i=B;i>=0;i--)
    {
        if(bits[i] == n)
        {
            ans+=(1LL<<i);
        }
        else{
            int need = n-bits[i]; 
            if( k >= need)
            {
                ans += (1LL<<i);
                k -= need;
            }
        }
    }
    cout << ans << endl;
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