#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    string s;
    cin >> s;
    int n = s.size();

    vector<pair<int, int>> index;
    for (int i = 0; i < n; i++) 
    {
        index.push_back({s[i] - 'a', i + 1});
    }

    sort(index.begin(), index.end());

    int startIndex = s[0] - 'a';
    int endIndex = s[n - 1] - 'a';

    vector<int> path;
    int cost = 0;

    if (startIndex <= endIndex) 
    {
        for (auto p : index) 
        {
            if (p.first >= startIndex && p.first <= endIndex) 
            {
                path.push_back(p.second);
            }
        }
    } 
    else 
    {
        for (auto it = index.rbegin(); it != index.rend(); ++it) 
        {
            if (it->first <= startIndex && it->first >= endIndex) 
            {
                path.push_back(it->second);
            }
        }
    }

    if (path.front() != 1) path.insert(path.begin(), 1);
    if (path.back() != n) path.push_back(n);

    for (int i = 1; i < path.size(); i++)
    {
        cost += abs((s[path[i] - 1] - 'a') - (s[path[i - 1] - 1] - 'a'));
    }

    cout << cost << " " << path.size() << endl;
    for (int idx : path) 
    {
        cout << idx << " ";
    }
    cout << endl;
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
