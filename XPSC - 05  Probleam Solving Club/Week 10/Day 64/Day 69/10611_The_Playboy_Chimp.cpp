#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    long long n;
    cin >> n;
    vector<long long> ar(n);
    for (int i = 0; i < n; i++) cin >> ar[i];
    int q;
    cin >> q;

    while (q--)
    {
        ll val;
        cin >> val;

        auto l = lower_bound(ar.begin(), ar.end(), val);
        auto r = upper_bound(ar.begin(), ar.end(), val);

        if (l != ar.begin())
        {
            l--;
            cout << *l;
        }
        else
        {
            cout << "X";
        }

        cout << " ";

        if (r != ar.end())
        {
            cout << *r;
        }
        else
        {
            cout << "X";
        }

        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();


    return 0;
}