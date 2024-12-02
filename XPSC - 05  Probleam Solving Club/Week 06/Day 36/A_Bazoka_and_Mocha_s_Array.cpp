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
    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    bool check = true;
    int pos = -1;
    for(int i=1;i<N;i++)
    {
        if(value[i-1] > value[i])
        {
            check = false;
            pos = i;
        }
    }

    if(check) cout<<"YES"<<endl;

    else
    {
        vector<int> first,second;
        for(int i=0;i<pos;i++)
        {
            first.push_back(value[i]);
        }
        for(int i=pos;i<N;i++)
        {
            second.push_back(value[i]);
        }

        sort(value.begin(),value.end());
        second.insert(second.end(),first.begin(),first.end());
        bool check=true;
        
        for(int i=0;i<N;i++)
        {
            if(value[i] != second[i])
            {
                check=false;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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