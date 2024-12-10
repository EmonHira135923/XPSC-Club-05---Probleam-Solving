#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    string n;
    cin >> n;

    int len = n.size(); 
    int index = 0;

    for (int i = 1; i < len;i++) 
    {
        index += (1 << i);
    }

    int offset = 0;
    for (int i = 0; i < len;i++) 
    {
        offset <<= 1; 
        if (n[i] == '7') 
        {
            offset += 1;
        }
    }

    cout << index + offset + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}