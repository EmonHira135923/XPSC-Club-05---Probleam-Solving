#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;

        if(x==1) cout << "-1" << endl;
        else if(x==2) cout << __gcd(1,2) << endl;
        else cout << x/2 << endl;

    }

    return 0;
}