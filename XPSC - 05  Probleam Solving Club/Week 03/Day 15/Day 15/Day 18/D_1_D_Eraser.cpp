#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    string ar;
    cin >> ar;

    int cnt = 0;
    int idx = 0;
    while(true)
    {
        if(idx>=n) break;
        if(ar[idx] == 'B')
        {
            idx+=k;
            cnt++;
        }
        else idx++;
    }
    cout << cnt << endl;
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