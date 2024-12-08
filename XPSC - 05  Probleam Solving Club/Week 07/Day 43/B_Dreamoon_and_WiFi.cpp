#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

double solve(string s1, string s2) 
{
    int target = 0;
    for (char c : s1) 
    {
        if (c == '+') target++;
        else target--;
    }

    int current = 0;
    int unknown = 0;
    for (char c : s2) 
    {
        if (c == '+') current++;
        else if (c == '-') current--;
        else if (c == '?') unknown++;
    }

    int total_outcomes = 1 << unknown;
    int matching_outcomes = 0;

    for (int mask = 0; mask < total_outcomes;mask++) 
    {
        int temp = current;
        for (int i = 0; i < unknown; ++i) 
        {
            if (mask & (1 << i)) temp++;
            else temp--; 
        }
        if (temp == target) matching_outcomes++;
    }
    return (double)matching_outcomes / total_outcomes;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    cout << fixed << setprecision(12) << solve(s1, s2) << endl;
    return 0;
}
