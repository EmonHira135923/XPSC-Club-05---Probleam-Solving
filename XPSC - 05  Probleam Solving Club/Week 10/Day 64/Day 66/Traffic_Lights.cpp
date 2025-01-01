#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int x, n;
    cin >> x >> n;
    set<int> lights = {0, x};
    multiset<int> lengths = {x};

    for(int i = 0; i < n; i++) 
    {
        int p;
        cin >> p;

        auto it = lights.upper_bound(p);
        int right = *it;
        int left = *prev(it);

        lengths.erase(lengths.find(right - left));
        lengths.insert(p - left);
        lengths.insert(right - p);

        lights.insert(p);
        cout << *lengths.rbegin() << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
