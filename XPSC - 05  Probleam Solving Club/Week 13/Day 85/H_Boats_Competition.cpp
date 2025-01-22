#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int a, b;
    cin >> a;

    vector<int> arr(101, 0);

    for (int i = 0; i < a; i++)
    {
        cin >> b;
        arr[b]++;
    }

    int ans = 0;

    for (int j = 1; j < 101; j++)
    {
        int c = 0;
        for (int i = 0; i <= j; i++)
        {
            c += min(arr[i], arr[j - i]);
        }
        ans = max(ans, c / 2);
    }

    cout << ans << endl;

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