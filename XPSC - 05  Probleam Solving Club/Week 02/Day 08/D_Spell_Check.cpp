#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int sz;
        cin >> sz;
        string word;
        cin >> word;
        if (sz != 5) 
        {
            cout << "NO" << endl;
            continue;
        }
        sort(word.begin(), word.end());
        string target = "Timur";
        sort(target.begin(), target.end());
        if (word == target) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
