#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

int main()
{
    FASTIO;

    int N,Q;
    cin >> N >> Q;

    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    vector<int> ans(N+1);

    while(Q--)
    {
        int l,r;
        cin >> l >> r;
        l--,r--;
        ans[l]++;
        ans[r+1]--;
    }

    for(int i=1;i<=N;i++)
    {
        ans[i] = ans[i-1] + ans[i];
    }

    sort(value.rbegin(),value.rend());
    sort(ans.rbegin(),ans.rend());

    ll sum = 0;

    for(int i=0;i<N;i++)
    {
        sum += (1LL*ans[i]*value[i]);
    }

    cout << sum << endl;




    return 0;
}