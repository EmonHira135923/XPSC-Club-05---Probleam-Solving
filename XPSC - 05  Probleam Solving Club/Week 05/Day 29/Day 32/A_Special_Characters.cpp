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

    if(N%2==1) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;

        for(int i=1;i<=N;i++)
        {
            if(i%2==0) cout << "AA";
            else cout << "AB";
        }
        cout << endl;
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