#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), h(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> h[i];

        int left = 0, current_sum = 0, max_len = 0;

        for (int right = 0; right < n; right++) 
        {
            current_sum += a[right];
            if (right > 0 && h[right - 1] % h[right] != 0) 
            {
                left = right;
                current_sum = a[right];
            }
            while (current_sum > k) 
            {
                current_sum -= a[left];
                left++;
            }
            max_len = max(max_len, right - left + 1);
        }
        cout << max_len << "\n";
    }
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}