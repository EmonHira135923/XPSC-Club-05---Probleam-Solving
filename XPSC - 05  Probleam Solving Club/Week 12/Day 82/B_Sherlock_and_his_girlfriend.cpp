#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    if(n==1)
    {
        cout << "1" << endl;
        cout << "1" << endl;
        return;
    }

    if(n==2)
    {
        cout << "1" << endl;
        cout << "1 1" << endl;
        return;
    }

    vector<int> colors(n + 2, 0);
    int max_color = 2;

    for (int i = 2; i <= n + 1; i++) 
    {
        if (colors[i] == 0) 
        {
            colors[i] = 1;
            for (int j = i * 2; j <= n + 1; j += i) 
            {
                colors[j] = 2;
            }
        }
    }

    cout << max_color << endl;
    for (int i = 2; i <= n + 1; i++) 
    {
        if (i > 2) cout << " "; 
        cout << colors[i];
    }
    cout << endl;
}

int main() 
{
    FASTIO;

    solve();

    return 0;
}
