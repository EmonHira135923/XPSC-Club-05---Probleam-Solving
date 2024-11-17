#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> cost(n);
    for (int i=0;i<n;i++) 
    {
        int a;
        cin >> a;
        cost[i] = a + (i + 1);
    }
    sort(cost.begin(), cost.end());
    int used = 0, total_cost = 0;
    for (int i=0;i<n;i++) 
    {
        if (total_cost + cost[i] <= c) 
        {
            total_cost += cost[i];
            used++;
        } 
        else 
        {
            break;
        }
    }
    cout << used << endl;
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
