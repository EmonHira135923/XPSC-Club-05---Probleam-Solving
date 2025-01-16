#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

void solve()
{
    ll N;
    cin >> N;

    vector<ll> myvalue(N);
    map<ll, ll> freq;

    for (ll i = 0; i < N; i++)
    {
        cin >> myvalue[i];
        freq[myvalue[i]]++;
    }

    vector<ll> freq_cnt(N + 1, 0);

    for (auto [x, count] : freq)
    {
        for (ll y = x; y <= N; y += x)
        {
            freq_cnt[y] += count;
        }
    }

    ll ans = *max_element(freq_cnt.begin(), freq_cnt.end());

    cout << ans << endl;
}

int main()
{
    FASTIO;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
