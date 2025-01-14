#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int N;
    cin >> N;
    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    ll cnt,zero;
    cnt = 0, zero= 0;

    for(int i=0;i<N;i++)
    {
        if(myvalue[i]==0) cnt++;
        if(myvalue[i]==1) zero++;
    }

    ll total_zero = (1LL<<cnt);
    ll total_value =  total_zero * zero;

    cout << total_value << endl;

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