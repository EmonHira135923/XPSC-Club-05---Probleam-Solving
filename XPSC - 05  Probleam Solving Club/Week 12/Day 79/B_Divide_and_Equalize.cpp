#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{
    int N;
    cin >> N;
    vector<int> value(N);
    for (int i = 0; i < N; i++) cin >> value[i];

    map<int, int> total_factors;

    for (int i = 0; i < N; i++) 
    {
        int num = value[i];
        map<int, int> factors;
        for (int j = 2; j * j <= num; j++) 
        {
            while (num % j == 0) 
            {
                factors[j]++;
                num /= j;
            }
        }

        if (num > 1) factors[num]++;

        for (auto [prime, count] : factors) 
        {
            total_factors[prime] += count;
        }
    }

    bool possible = true;
    for (auto [prime, count] : total_factors) 
    {
        if (count % N != 0) 
        {
            possible = false;
            break;
        }
    }

    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
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
