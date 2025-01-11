#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    ll a,b;
    cin >> a >> b;

    ll val = (a+1) / 2;

    if(b<=val) cout << (2*b-1) << endl;
    else
    {
        ll sum,div,group,cnt,frist_name;
        sum  = 2,div = 4,group = 2,cnt = val,frist_name = 2;

        while(true)
        {
            int num = (a+sum)/div+ cnt;
            if(b>num)
            {
                sum *= 2;

                div *= 2;

                group++;

                cnt = num;

                frist_name*=2;
            }
            else break;
        }
        b -= cnt;

        cout << frist_name + (b - 1) * (frist_name * 2) << endl;
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