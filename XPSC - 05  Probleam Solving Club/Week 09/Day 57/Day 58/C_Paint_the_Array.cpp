#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int N;
    cin >> N;
    vector<ll> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    ll frist_gcd,secend_gcd;
    frist_gcd = 0,secend_gcd=0;

    for(int i=0;i<N;i+=2)
    {
        frist_gcd = __gcd(frist_gcd,myvalue[i]);
    }
    for(int i=1;i<N;i+=2)
    {
        secend_gcd = __gcd(secend_gcd,myvalue[i]);
    }

    ll ans = 0;
    bool flag = true;

    for(int i=1;i<N;i+=2)
    {
        if(myvalue[i]%frist_gcd==0)
        {
            flag = false;
            break;
        }
    }

    if(flag) ans = frist_gcd;
    else
    {
        bool okey = true;
        for(int i=0;i<N;i+=2)
        {
            if(myvalue[i]%secend_gcd==0)
            {
                okey = false;
                break;
            }
        }
        if(okey) ans = secend_gcd; 
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