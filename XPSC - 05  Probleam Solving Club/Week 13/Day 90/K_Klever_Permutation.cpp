#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

void solve()
{
    ll N, K;
    cin >> N >> K;

    vector<ll> a(N + 1); 
    ll l = 1, r = N;

    for (int j = 1; j <= K; j++) 
    {
        for (int i = j; i <= N; i += K) 
        {
            if(i&1) a[i] = l++;
            else a[i] = r--;
        }
    }

    for (int i = 1; i <= N; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    FASTIO;
    
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}
