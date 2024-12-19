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

    vector<int> myvalue(N+1);
    for(int i=1;i<=N;i++) cin >> myvalue[i];

    int cnt = 3;

    for(int i=1;i<=N;i++)
    {
        if(myvalue[myvalue[i]]==i)
        {
            cnt = 2;
            break;
        }
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