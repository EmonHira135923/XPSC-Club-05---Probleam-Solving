#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    long long currentSum = 0;
    int start = 0, minLength = INT_MAX;

    for (int i = 0; i < n; i++) 
    {
        currentSum += a[i];

        while (currentSum >= s) 
        {
            minLength = min(minLength, i - start + 1);
            currentSum -= a[start];
            start++;
        }
    }

    if (minLength == INT_MAX) 
    {
        cout << -1 << endl;
    } 
    else 
    {
        cout << minLength << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}