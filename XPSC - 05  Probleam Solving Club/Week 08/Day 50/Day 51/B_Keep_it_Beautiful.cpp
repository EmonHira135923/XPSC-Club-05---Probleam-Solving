#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    int q;
    cin >> q;
    vector<int> a;
    string result = "";
    bool flag = false;
    for (int i = 0; i < q; i++) 
    {
        int x;
        cin >> x;

        if (a.empty()) 
        {
            a.push_back(x);
            result += '1';
            continue;
        }

        if (!flag) 
        {
            if (x >= a.back()) 
            {
                a.push_back(x);
                result += '1';
            } 
            else if (x <= a.front()) 
            {
                flag = true;
                a.push_back(x);
                result += '1';
            } 
            else 
            {
                result += '0';
            }
        } 
        else 
        {
            if (x >= a.back() && x <= a.front()) 
            {
                a.push_back(x);
                result += '1';
            } 
            else 
            {
                result += '0';
            }
        }
    }
    cout << result << "\n";
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