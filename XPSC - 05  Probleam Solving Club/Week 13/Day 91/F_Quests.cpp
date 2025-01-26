#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;
int a[210000];

void solve()
{
    ll n,c,d;
    cin >> n >> c >> d;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,greater<int>());
    int l = 0,r = d+2;
    while(l<r)
    {
        int m = l+(r-l+1)/2;
        long long tot = 0;
        for(int i=0;i<d;i++)
        {
            if(i % m < n) tot += a[i%m];
        }
        if(tot >= c) l = m;
        else r = m-1;
    }
    if(l == d+2) cout << "Infinity" << endl;
    else if(l == 0) cout << "Impossible" << endl;
    else cout << l-1 << endl;

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