#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    ll a,b,c;
    cin >> a >> b >> c;

    if((max(b,c) == 1 && min(b,c) == a ) || (max(b,c)-min(b,c)) == 1)
    {
        if(a & 1)
        {
            for(ll i=1;i<a;i++)
            {
                if(i&1)
                {
                    cout << "0" << " ";
                }
                else
                {
                    cout << "1" << " ";
                }
            }
            cout << "2" << endl;
        }
        else
        {
            for(ll i=1;i<=a;i++)
            {
                if(i&1)
                {
                    cout << "0" << " ";
                }
                else
                {
                    cout << "1" << " ";
                }
            }
            cout << endl;
        }
    }
    else
    {
        vector<ll> ans(a+1,-1);
        ans[b] = 1;
        ans[c] = 0;

        for(ll i=min(b,c)+1;i<max(b,c);i++)
        {
            ans[i] = ans[i-1] ^ 1;
        }
        for(ll i=max(b,c)+1;;i++)
        {
            if(i==a+1)
            {
                i = 1;
            }
            if(i==min(b,c)) break;

            if((i-1)==0) ans[i] = ans[a] ^ 1;
            else ans[i] = ans[i-1] ^ 1; 
        }
        for(ll i=1;i<=a-1;i++)
        {
            if(ans[i]==ans[i+1])
            {
                ans[i] = 2;
            }
        }
        if(ans[a]==ans[1])
        {
            ans[a] = 2;
        }
        for(ll i=1;i<=a;i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
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