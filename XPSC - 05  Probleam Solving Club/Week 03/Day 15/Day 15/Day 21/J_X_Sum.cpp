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
    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> grid[i][j];
        }
    }

    int max_sum = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            int current_sum = grid[i][j];
            int x = i - 1, y = j - 1;
            while (x >= 0 && y >= 0) 
            {
                current_sum += grid[x][y];
                x--;
                y--;
            }
            x = i - 1, y = j + 1;
            while (x >= 0 && y < m) 
            {
                current_sum += grid[x][y];
                x--;
                y++;
            }
            x = i + 1, y = j - 1;
            while (x < n && y >= 0) 
            {
                current_sum += grid[x][y];
                x++;
                y--;
            }
            x = i + 1, y = j + 1;
            while (x < n && y < m) 
            {
                current_sum += grid[x][y];
                x++;
                y++;
            }
            max_sum = max(max_sum, current_sum);
        }
    }
    cout << max_sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}