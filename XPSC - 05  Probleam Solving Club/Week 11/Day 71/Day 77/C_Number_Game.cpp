#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

bool check(vector<int> ar, int k, int n) 
{
    sort(ar.begin(),ar.end());

    int index = 0;
    for (int i = 1; i <= k; i++) 
    {
        bool removed = false;

        for (int j = 0; j < ar.size(); j++) 
        {
            if (ar[j] <= (k - i + 1)) 
            {
                ar.erase(ar.begin() + j);
                removed = true;
                break;
            }
        }
        if (!removed) return false;

        if (!ar.empty()) ar.back() += (k - i + 1);
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++) cin >> ar[i];
        sort(ar.begin(),ar.end());

        int l = 1, r = 101, ans = 0;

        while (l <= r) 
        {
            int mid = l + (r - l) / 2;

            if (check(ar, mid, n)) 
            {
                ans = mid;
                l = mid + 1;
            } 
            else 
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
