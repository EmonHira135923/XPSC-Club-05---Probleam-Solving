#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    ll x,y,z;
    cin >> x >> y >> z;

    while(z && x !=1)
    {
        ll flag,ans;

        flag = ((x/y)+1)*y;
        ans = flag - x;

        if(ans <= z)
        {
            z -= ans;
            x += ans;
        }
        else
        {
            x += z;
            z = 0;
        }
        while(x%y==0)
        {
            x /= y;
        }
    }
    cout << x+z%(y-1) << endl;


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