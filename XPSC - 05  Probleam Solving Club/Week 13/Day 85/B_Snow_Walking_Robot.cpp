#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    string s;
    cin >> s;

    map<char, int> freq;

    for (auto c: s) 
    {
      freq[c] += 1;
    }

    string t = "DLUR";
    string l = "", r = "";

    for (int i = 0; i < 2; i++) 
    {
        for (auto c: s) 
        {
            if (c == t[i] && freq[t[i]] && freq[t[i + 2]]) 
            {
                l += t[i];
                r += t[i + 2];
                freq[t[i]] -= 1;
                freq[t[i + 2]] -= 1;
            }
        }
    }

    int nl = int(l.size());
    int nr = int(r.size());
    int ans = nl + nr;
    string res = l + r;

    int cl = count(l.begin(), l.end(), l[0]);
    int cr = count(r.begin(), r.end(), r[0]);

    if (cl == nl && cr == nr && nl && nr) 
    {
        ans = 2;
        res = "";
        res += l[0];
        res += r[0];
    }

    cout << ans << "\n";

    cout << res << "\n";

}

int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}