#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    string word;
    cin >> word;

    map<char,int> mycode;
    int N = word.size();

    for(int i=0;i<N;i++)
    {
        mycode[word[i]]++;
    }

    int Cnt=0;

    for(auto[cnt,div]:mycode)
    {
        if(div%2!=0)
        {
            Cnt++;
        }
    }

    if(Cnt>1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    string first,secend,third;

    for(auto[cnt,div]:mycode)
    {
        if(div%2!=0)
        {
            for(int i=1;i<=div;i++)
            {
                secend.push_back(cnt);
            }
        }
        else
        {
            for(int i=1;i<=(div/2);i++)
            {
                first.push_back(cnt);
                third.push_back(cnt);
            }
        }
    }

    reverse(third.begin(),third.end());

    string ans = first + secend + third;

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 

    return 0;
}