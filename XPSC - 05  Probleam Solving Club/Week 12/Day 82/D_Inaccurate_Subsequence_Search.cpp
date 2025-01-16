#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    unordered_map<int, int> Freq;
    for (int x : b) Freq[x]++;

    unordered_map<int, int> freq;
    int match = 0, result = 0;

    for (int i = 0; i < n; i++) 
    {
        freq[a[i]]++;
        if (Freq.count(a[i]) && freq[a[i]] <= Freq[a[i]]) 
        {
            match++;
        }

        if (i >= m) 
        {
            int cnt = a[i - m];
            if (Freq.count(cnt) && freq[cnt] <= Freq[cnt]) 
            {
                match--;
            }
            freq[cnt]--;
        }

        if (i >= m - 1 && match >= k) 
        {
            result++;
        }
    }

    cout << result << endl;
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
