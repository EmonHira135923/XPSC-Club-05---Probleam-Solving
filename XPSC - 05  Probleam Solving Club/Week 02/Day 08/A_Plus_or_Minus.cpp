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
        int a,b,c;
        cin >> a >> b >> c;

        if(a+b==c)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }

    return 0;
}