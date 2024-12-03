#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int n,m;
    cin >> n >> m;
    int ans = (m+1)/2;
    if(ans == 0)
    {
        float rem = (n*1.0)/15;
        int remInt = rem;
        if(remInt == rem) cout << ans+remInt << endl;
        else cout << ans+remInt+1 << endl;
    }
    else
    {
        int totalCell = ans*15;
        int remCell = totalCell-(m*4);
        if(n<=remCell) cout << ans << endl;
        else
        {
            int restN = n-remCell;
            float rem = (restN*1.0)/15;
            int remInt = rem;
            if(remInt == rem) cout << ans+remInt << endl;
            else cout << ans+remInt+1 << endl;
        }
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