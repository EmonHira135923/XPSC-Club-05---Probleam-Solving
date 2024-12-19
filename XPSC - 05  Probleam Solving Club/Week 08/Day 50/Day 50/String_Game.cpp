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

    string word;
    cin >> word;

    int val = 0;
    for(int i=0;i<N-1;i++)
    {
        if(word[i] != word[i+1])
        {
            val++;
        }
        i++;
    }

    if(val%2==0) cout << "Ramos" << endl;
    else cout << "Zlatan" << endl;


    
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