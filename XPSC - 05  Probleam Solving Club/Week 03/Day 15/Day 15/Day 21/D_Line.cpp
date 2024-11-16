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
    string s;
    cin >> s;

    vector<long long> value;
    long long initial_value = 0;
    for(int i = 0; i < n; i++) 
    {
        if(s[i] == 'L') 
        {
            initial_value += i;
            value.push_back(n - i - 1 - i);
        } 
        else 
        {
            initial_value += n - i - 1;
            value.push_back(i - (n - i - 1));
        }
    }
    sort(value.rbegin(), value.rend());
    vector<long long> results(n);
    long long current_value = initial_value;
    for(int k = 0; k < n; k++) 
    {
        if(value[k] > 0) current_value += value[k];
        results[k] = current_value;
    }
    for(int k = 0; k < n; k++) 
    {
        cout << results[k] << " ";
    }
    cout << "\n";
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
