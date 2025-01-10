#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string dish;
    cin >> dish;

    ll  amountB,amountS,amountC;
    cin >> amountB >> amountS >> amountC;
    ll costB,costS,costC;
    cin >> costB >> costS >> costC;
    ll money;
    cin >> money;

    ll cntb = 0,cnts = 0,cntc = 0;

    for(auto x : dish)
    {
        if(x=='B') cntb++;
        else if(x=='S') cnts++;
        else cntc++;
    }



    ll l = 1,r=1e15,ans = 0;

    while(l<=r)
    {
        ll mid = l + (r-l)/2;

        ll b = max(0LL, cntb * mid - amountB);
        ll c = max(0LL, cntc * mid - amountC);
        ll s = max(0LL, cnts * mid - amountS);



        ll taka = (b*costB) + ( c * costC) + (s*costS);

        if(taka<=money)
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
         
    }
    cout << ans << endl;

    return 0;
}