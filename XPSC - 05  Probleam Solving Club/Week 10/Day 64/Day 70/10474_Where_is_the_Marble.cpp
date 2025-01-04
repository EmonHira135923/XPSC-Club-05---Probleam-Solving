#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int N, Q, caseNum = 1;
    while (cin >> N >> Q && (N != 0 && Q != 0)) 
    {
        vector<int> marbles(N);
        for (int i = 0; i < N; i++) 
        {
            cin >> marbles[i];
        }
        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << caseNum++ << ":\n";

        while (Q--) {
            int query;
            cin >> query;
            auto it = lower_bound(marbles.begin(), marbles.end(), query);
            if (it != marbles.end() && *it == query) 
            {
                cout << query << " found at " << (it - marbles.begin() + 1) << "\n";
            } 
            else 
            {
                cout << query << " not found\n";
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}