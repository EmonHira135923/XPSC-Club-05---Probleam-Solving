#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    double current_points = a + 0.5 * b;

    double max_points = current_points + (4 - a - b - c);

    if (max_points > 2) 
    {
        cout << "Yes" << endl;
    } 
    else 
    {
        cout << "No" << endl;
    }
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
