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
    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    ll sum = value[0];
    int mx = value[0];

    int cnt = 0;

    if(value[0]==0) cnt++;

    for(int i=1;i<N;i++)
    {
        mx = max(mx,value[i]);
        sum += value[i];

        if(sum-mx==mx) cnt++;
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