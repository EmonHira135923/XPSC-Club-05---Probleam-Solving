#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;
    
    vector<int> a(n);
    int totalSum = 0;
    
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        totalSum += a[i];
    }
    

    if (totalSum == s) 
    {
        cout << 0 << endl;
        return;
    }
    

    if (totalSum < s) 
    {
        cout << -1 << endl;
        return;
    }

    int left = 0, right = n - 1;
    int currentSum = totalSum;
    int min_operations = INT_MAX;

    while (left <= right) 
    {
        if (currentSum > s) 
        {
            if (a[left] == 1) 
            {
                currentSum--;
            }
            left++;
        }

        if (currentSum == s) 
        {
            min_operations = min(min_operations, left + (n - right - 1));
            break;
        }

        if (currentSum > s) 
        {
            if (a[right] == 1) 
            {
                currentSum--;
            }
            right--;
        }

        if (currentSum == s) 
        {
            min_operations = min(min_operations, left + (n - right - 1));
            break;
        }
    }

    if (min_operations != INT_MAX) 
    {
        cout << min_operations << endl;
    } 
    else 
    {
        cout << -1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    

    return 0;
}