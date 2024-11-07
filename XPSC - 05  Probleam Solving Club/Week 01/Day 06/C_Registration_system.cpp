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
    map<string,int> word_cnt;
    while(t--)
    {
        string word;
        cin >> word;

        if(word_cnt[word]==0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << word << word_cnt[word] << endl;
        }
        word_cnt[word]++;
    }

    return 0;
}