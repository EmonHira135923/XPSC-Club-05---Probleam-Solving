#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;
        set<char> myword(b.begin(), b.end());
        string r(myword.begin(), myword.end());
        string s = b;
        for(int i = 0; i < n; i++)
        {
            int index = r.find(b[i]);
            s[i] = r[r.size() - 1 - index];
        }
        cout << s << endl;
    }
    return 0;
}
