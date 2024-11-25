#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N;
        cin >> N;
        
        int x = (N | 1);
        int y = (N ^ 1);
        
        cout << x << " " << y << endl;
    }
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
