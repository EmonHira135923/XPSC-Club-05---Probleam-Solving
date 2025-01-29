#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

int main()
{
    FASTIO;

    int n, t = 0, misIndex = -1;
 
    cin >> n;
 
    int aux;
    int max = -1;
 
    for (int i = 0; i < n; i++) 
    {
        cin >> aux;
 
        if (aux <= max + 1) 
        {
            t++;
            if (aux == max + 1) max++;
        } 
        else 
        {
            misIndex = i;
            break;
        }
    }
 
    if (t == n) cout << -1 << endl;
    else cout << misIndex + 1 << endl;

    return 0;
}