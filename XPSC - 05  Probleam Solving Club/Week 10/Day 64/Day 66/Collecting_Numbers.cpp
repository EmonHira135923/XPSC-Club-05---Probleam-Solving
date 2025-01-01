#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int n;
    cin >> n;
    vector<int> arr(n), index(n + 1);

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        index[arr[i]] = i;
    }

    int rounds = 1;
    for (int i = 2; i <= n; i++) 
    {
        if (index[i] < index[i - 1]) 
        {
            rounds++;
        }
    }

    cout << rounds << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();


    return 0;
}