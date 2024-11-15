#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve()
{
    int N, M, H;
    cin >> N >> M >> H;

    vector<int> value(N);
    vector<int> myvalue(M);

    for (int i = 0; i < N; i++) 
    {
        cin >> value[i];
    }
    for (int i = 0; i < M; i++) 
    {
        cin >> myvalue[i];
    }

    sort(value.rbegin(), value.rend());
    sort(myvalue.rbegin(), myvalue.rend());

    ll total_cost = 0;
    ll energy;

    for (int i = 0; i < min(N, M); i++) 
    {
        energy = (ll)myvalue[i] * H;
        total_cost += min((ll)value[i], energy);
    }
    cout << total_cost << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) 
    {
        solve();
    }

    return 0;
}
