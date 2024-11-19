#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    multiset<int> ms;
    int left = 0;
    long long result = 0;

    for (int right = 0; right < n; right++) 
    {
        ms.insert(a[right]);

        while (*ms.rbegin() - *ms.begin() > k) 
        {
            ms.erase(ms.find(a[left]));
            left++;
        }
        result += (right - left + 1);
    }

    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}