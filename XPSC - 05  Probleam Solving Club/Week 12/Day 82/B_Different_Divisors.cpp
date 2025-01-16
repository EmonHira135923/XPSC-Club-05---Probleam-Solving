#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

bool isprime(int n)
{
    for(int i = 2; i <= n / 2 ;i++ )
    {
        if( n % i == 0) return false;
    }

    return true;
}
void solve()
{
    
    int N;
    cin >> N;
    int k = 1 + N;
    int ans1 = 0, ans2 = 0;
    for(int i = k ;i <= 1e9;i++)
    {
        if(isprime(i))
        {
            ans1 = i;
            break;
        }
    }
    for(int i = ans1 + N;i <= 1e9;i++)
    {
        if(isprime(i))
        {
            ans2 = i;
            break;
        }
    }

    cout << ans1 * ans2 << endl;
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