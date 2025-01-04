#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int N,Q;
    cin >> N >> Q;

    vector<int> myvalue(N+1);

    for(int i=0;i<N;i++)
    {
        cin >> myvalue[i];
    }

    vector<int> prefix_sum(N+1);

    sort(myvalue.rbegin(),myvalue.rend());

    for(int i=1;i<=N;i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + myvalue[i-1];
    }

    while(Q--)
    {
        int K;
        cin >> K;

        int ans = -1;

        auto it = lower_bound(prefix_sum.begin(),prefix_sum.end(),K);

        if(it != prefix_sum.end())
        {
            ans = it - prefix_sum.begin();
        }

        cout << ans << endl;
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