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
    map<string,string> myname,myuser;
    for(int i=1;i<=t;i++)
    {
        string frist_name,secend_name;
        cin >> frist_name >> secend_name;
        if(myuser.find(frist_name) != myuser.end())
        {
            string word = myuser[frist_name];
            myname[word] = secend_name;
            myuser.erase(frist_name);
            myuser[secend_name] = word;
        }
        else
        {
            myname[frist_name] = secend_name;
            myuser[secend_name] = frist_name;
        }
    }
    cout << myname.size() << endl;
    for(auto [x,y] : myname)
    {
        cout << x << " " << y << endl;
    }
    return 0;
}