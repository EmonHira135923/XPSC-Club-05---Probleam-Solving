#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

vector<int> all_prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void solve()
{
    int N;
    cin >> N;

    vector<int> value(N);
    for (int i = 0; i < N; i++) cin >> value[i];

    map<int, vector<int>> freq;

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < 11; j++) 
        {
            if (value[i] % all_prime[j] == 0) 
            {
                freq[all_prime[j]].push_back(i);
                break;
            }
        }
    }

    vector<int> ans(N, 0);
    int color = 1;

    for (auto [prime, indices] : freq) 
    {
        for (auto pos : indices) 
        {
            ans[pos] = color;
        }
        color++;
    }

    cout << freq.size() << endl;
    for (int i = 0; i < N; i++) 
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
