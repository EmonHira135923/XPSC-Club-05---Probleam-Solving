#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int N,K;
    cin >> N >> K;
    vector<int> myvalue(N+1);
    for(int i=1;i<=N;i++) cin >> myvalue[i];

    int cnt = 0;
    for(int i=1;i<=N;i++)
    {
        if(i%K != myvalue[i]%K) cnt++;
    }
    if(cnt==0) cout << "0" << endl;
    else if(cnt==2) cout << "1" << endl;
    else cout << "-1" << endl;
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