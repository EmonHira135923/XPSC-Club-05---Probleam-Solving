#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    ll n,a,b;
    cin >> n >> a >> b;

    if((a<=n/2 and b>=n/2+1)||(a==n/2+1 and b==n/2))
    {
        cout << a << " ";

        for(int i=n;i>=1;i--)
        {
            if(i!=a && i!=b) cout << i << " ";
        }

        cout << b;
    }

    else cout << -1;
    cout << endl;

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