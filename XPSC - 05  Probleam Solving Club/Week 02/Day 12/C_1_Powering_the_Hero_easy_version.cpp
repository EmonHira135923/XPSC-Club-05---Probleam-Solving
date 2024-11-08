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
    
    vector<int> s(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> s[i];
    }
    
    priority_queue<int> bonusDeck;
    long long totalPower = 0;
    
    for (int i = 0; i < n; i++) 
    {
        if (s[i] > 0) 
        {
            bonusDeck.push(s[i]);
        } 
        else 
        {
            if (!bonusDeck.empty()) 
            {
                totalPower += bonusDeck.top();
                bonusDeck.pop();
            }
        }
    }
    cout << totalPower << "\n";
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
