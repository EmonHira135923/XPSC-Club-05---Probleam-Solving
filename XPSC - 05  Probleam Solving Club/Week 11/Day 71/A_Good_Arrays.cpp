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

    vector<ll>myvalue(N);

    ll sum,ones;
    sum = 0 , ones = 0;
    
    for(ll i=0;i<N;i++)
    {
        cin >> myvalue[i];
        sum += myvalue[i];

        if(myvalue[i]==1) ones++;
    }

    if(N==1 || sum==1) cout << "NO" << endl;
    else
    {
        ll sum2 = sum - (ones*1LL*2);

        int idx = N - ones;

        if(sum2>=idx) cout << "YES" << endl;

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