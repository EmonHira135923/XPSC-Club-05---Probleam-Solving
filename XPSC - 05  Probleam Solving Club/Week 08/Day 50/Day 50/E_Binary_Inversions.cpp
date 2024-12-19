#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
ll solve(vector<int>& arr) 
{
    ll inversion = 0, countZero = 0;
    for (int i = arr.size() - 1; i >= 0; i--) 
    {
        if (arr[i] == 0) countZero++;
        else inversion += countZero;
    }
    return inversion;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        ll initialInversions = solve(arr);
        ll maxInversions = initialInversions;

        for (int i = 0; i < n; i++) 
        {
            if (arr[i] == 0) 
            {
                arr[i] = 1;
                maxInversions = max(maxInversions, solve(arr));
                arr[i] = 0;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) 
        {
            if (arr[i] == 1) 
            {
                arr[i] = 0;
                maxInversions = max(maxInversions, solve(arr));
                arr[i] = 1;
                break;
            }
        }

        cout << maxInversions << endl;
    }
    return 0;
}