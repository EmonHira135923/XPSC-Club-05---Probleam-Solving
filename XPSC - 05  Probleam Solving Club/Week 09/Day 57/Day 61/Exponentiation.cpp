#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
const int mod = 1e9+7;

int solve(int x,int y) 
{
    int ans = 1 % mod;
    while(y)
    {
        if(y&1)
        {
            ans = (1LL * ans % mod * x % mod) % mod;
        }
        x = 1LL * x * x % mod;

        y >>= 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;

        int Ans = solve(a,b);

        cout << Ans << endl;
    }

    return 0;
}