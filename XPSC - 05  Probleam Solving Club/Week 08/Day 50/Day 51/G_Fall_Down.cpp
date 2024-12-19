#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int n,m;
    cin >> n >> m;
    vector<vector<char>> value(n,vector<char> (m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> value[i][j];
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(value[i][j]=='*')
            {
                int row=i;
                while(row+1<n)
                {
                    if(value[row+1][j]!='o' && value[row+1][j]!='*')
                    {
                        value[row][j] = '.';
                        value[row+1][j] = '*';
                    }
                    else break;
                    row++;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<value[i][j];
        }
        cout << endl;
    }
    cout << endl;
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