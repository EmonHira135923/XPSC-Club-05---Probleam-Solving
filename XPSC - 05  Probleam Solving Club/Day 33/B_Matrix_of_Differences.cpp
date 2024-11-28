#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    int N;
    cin >> N;
    int M = N*N;

    set<int> value;
    for(int i=1;i<=M;i++) value.insert(i);
    int grid[N][N];
    for(int i=0;i<N;i++)
    {
        if(i%2==0)
        {
            for(int j=N-1;j>=0;j--)
            {
                if(j%2==0)
                {
                    auto it=prev(value.end());
                    grid[i][j]=*it;
                    value.erase(it);
                }
                else
                {
                    auto it=value.begin();
                    grid[i][j]=*it;
                    value.erase(it);
                }
            }
        }
        else{
            for(int j=0;j<N;j++)
            {
                if(j%2==0)
                {
                    auto it=value.begin();
                    grid[i][j]=*it;
                    value.erase(it);
                }
                else
                {
                    auto it=prev(value.end());
                    grid[i][j]=*it;
                    value.erase(it);
                }
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
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