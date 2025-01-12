#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    ll N;
    cin >> N;
    vector<ll> myvalue(N);
    for(ll i=0;i<N;i++) cin >> myvalue[i];

    map<tuple<ll,ll,ll>,ll> Pair;
    ll cnt = 0;

    for(int i=0;i<N-2;i++)
    {
        cnt+=(Pair[{-1,myvalue[i+1],myvalue[i+2]}]+Pair[{myvalue[i],-1,myvalue[i+2]}]+Pair[{myvalue[i],myvalue[i+1],-1}] - 3*Pair[{myvalue[i],myvalue[i+1],myvalue[i+2]}]);
        Pair[{-1,myvalue[i+1],myvalue[i+2]}]++;
        Pair[{myvalue[i],-1,myvalue[i+2]}]++;
        Pair[{myvalue[i],myvalue[i+1],-1}]++;
        Pair[{myvalue[i],myvalue[i+1],myvalue[i+2]}]++;
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