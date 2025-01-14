#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;

    vector<string> strings(n);
    unordered_set<string> seen;
    vector<string> left, right;
    string middle = "";

    for (int i = 0; i < n; i++)
    {
        cin >> strings[i];
        string rev = string(strings[i].rbegin(), strings[i].rend());
        if (seen.count(rev)) 
        {
            left.push_back(strings[i]);
            right.push_back(rev);
            seen.erase(rev);
        } 
        else 
        {
            seen.insert(strings[i]);
        }
    }

    for (const string& s : seen) 
    {
        if (s == string(s.rbegin(), s.rend())) 
        {
            middle = s;
            break;
        }
    }

    string result = "";
    for (const string& s : left) result += s;
    result += middle;
    reverse(right.begin(), right.end());
    for (const string& s : right) result += s;

    cout << result.size() << endl;
    if (!result.empty()) cout << result << endl;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();


    return 0;
}