#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 1001;
int t, a, b, c, d[N][N];
int solve(int x, int y) 
{
    if (d[y][x] == 0) return 0;
    
    int sum = d[y][x];
    d[y][x] = 0;
    
    if (x > 1) sum += solve(x - 1, y);
    if (x < b) sum += solve(x + 1, y);
    if (y > 1) sum += solve(x, y - 1);
    if (y < a) sum += solve(x, y + 1);
    
    return sum;
}

int main() 
{
    cin >> t;
    while (t--) 
    {
        c = 0;
        cin >> a >> b;
        
        for (int i = 1; i <= a; i++)
            for (int j = 1; j <= b; j++)
                cin >> d[i][j];
        
        for (int i = 1; i <= a; i++)
            for (int j = 1; j <= b; j++)
                c = max(c, solve(j, i));
        
        cout << c << endl;
    }
    
    return 0;
}