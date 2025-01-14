#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    ll N,M;
    cin >> N >> M;

    vector<ll> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    if(N>M) cout << "NO" << endl;
    else
    {
        ll cnt = 0;
        sort(myvalue.begin(),myvalue.end());

        for(int i=0;i<N;i++)
        {
            cnt++;
            if(i==N-1)
            {
                cnt += myvalue[i];
            }
            else cnt += max(myvalue[i],myvalue[i+1]);
        }
        if(cnt<=M) cout << "YES" << endl;
        else cout << "NO" << endl;
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