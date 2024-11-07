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

    map<string,int> value;

    while(t--)
    {
        string word;
        cin >> word;

        if(value[word]==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        value[word]++;

        
        
    }

    return 0;
}