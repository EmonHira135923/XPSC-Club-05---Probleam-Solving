#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void solve()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    int zero_groups = 0, one_groups = 0;

    for (int i = 0; i < N; i++) 
    {
        if (i == 0 || S[i] != S[i - 1]) 
        { 
            if (S[i] == '0') zero_groups++;
            else one_groups++;
        }
    }
    cout << min(zero_groups, one_groups)<< endl;
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
