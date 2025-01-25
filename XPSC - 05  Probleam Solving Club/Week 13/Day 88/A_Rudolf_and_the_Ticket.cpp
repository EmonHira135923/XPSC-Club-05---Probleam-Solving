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

    vector<int> value(N);
    for(int i=0;i<N;i++)
    {
        cin >> value[i];
    }

    vector<int> code(M);
    for(int i=0;i<M;i++)
    {
        cin >> code[i];
    }

    int cnt = 0;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(value[i]+code[j]<=K)
            {
                cnt++;
            }
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