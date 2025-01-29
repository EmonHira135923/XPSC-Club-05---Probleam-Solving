#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int n,k; 
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char x;
            cin >> x;
            if(i%k == 0 && j%k == 0) cout << x;
        }
        if(i%k == 0) cout << endl;
    }		

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