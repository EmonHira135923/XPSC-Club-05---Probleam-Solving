#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int N,K;
    cin >> N >> K;

    string a,b;
    cin >> a >> b;

    int cnt = 0;

    for(int i=0;i<b.size();i++)
    {
        if(a[cnt]==b[i])
        {
            cnt++;
        }
    }

    cout << cnt << endl;



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