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
    
    int N,X;
    cin >> N >> X;

    vector<int> value;

    for(int i=0;i<N;i++)
    {
        int x;
        cin >> x;
        value.push_back(x);
    }

    vector<int> myvalue;

    for(int i=0;i<N;i++)
    {
        if(value[i] != X)
        {
            myvalue.push_back(value[i]);
        }
    }

    if(myvalue.empty())
    {
        cout << endl;
    }
    else
    {
        for(int i=0;i<myvalue.size();i++)
        {
            cout << myvalue[i];
            if(i<myvalue.size()-1)
            {
                cout << " ";
            }
        }
        cout << endl;

    }

    return 0;
}