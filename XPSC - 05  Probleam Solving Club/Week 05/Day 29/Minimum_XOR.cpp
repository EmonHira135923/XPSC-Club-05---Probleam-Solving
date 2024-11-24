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
    int XOR = 0;
    for(int i=0;i<N;i++)
    {
        cin >> myvalue[i];
        XOR ^= myvalue[i];
    }

    int ans = XOR;

    for(int i=0;i<N;i++)
    {
        int curxor = (XOR ^ myvalue[i]);
        ans = min(ans,curxor);
    }

    cout << ans << endl;

    
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