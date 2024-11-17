#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    int X, Y;
    cin >> X >> Y;

    int max_A = X / 3;
    int max_B = Y / 3;

    int point_A = X - (max_A * 3);
    int point_B = Y - (max_B * 3);
    int draws = 0;
    
    if (point_A == point_B) 
    {
        draws = point_A;
    }
    
    cout << draws << endl;
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