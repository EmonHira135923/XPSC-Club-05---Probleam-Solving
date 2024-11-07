#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#include <string.h>
#include <string>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string a, b;
        cin >> a >> b;
 
        for (int i = 0; i < N; i++) 
        {
            if (a[i] == 'G' || a[i] == 'B') 
            {
                a[i] = 'X';
            }
            if (b[i] == 'G' || b[i] == 'B') 
            {
                b[i] = 'X';
            }
        }
        
        if (a == b) 
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