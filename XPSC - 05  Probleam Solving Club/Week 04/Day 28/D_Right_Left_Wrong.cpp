#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long

void solve() 
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    string s;
    cin >> s;

    long long score = 0;
    int left = 0, right = n - 1;

    while (left < right) 
    {
        if (s[left] == 'L' && s[right] == 'R') 
        {
            score += accumulate(a.begin() + left, a.begin() + right + 1, 0LL);
            left++;
            right--;
        } 
        else 
        {
            if (s[left] != 'L') left++;
            if (s[right] != 'R') right--;
        }
    }

    cout << score << endl;
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
