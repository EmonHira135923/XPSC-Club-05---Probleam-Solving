#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int N,M,K;
    cin >> N >> M >> K;
    
    while (N>=20 && M)
    {
        N = N/2 + 10;
        M--;
    }

    N -= 10 * K;

    if (N<=0) cout << "YES" << endl;
    else cout<<"NO"<<endl;

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