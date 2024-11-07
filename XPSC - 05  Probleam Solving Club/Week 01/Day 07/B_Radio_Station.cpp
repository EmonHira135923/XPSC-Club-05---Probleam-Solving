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

    int N,M;
    cin >> N >> M;

    map<string,string> mycode;

    for(int i=0;i<N;i++)
    {
        string a,b;
        cin >> a >> b;
        mycode[b] = a;
    }
    for(int i=0;i<M;i++)
    {
        string c,d;
        cin >> c >> d;
        d.pop_back();

        cout << c << " " << d << ";" << " " << "#" << mycode[d] << endl;
    }
    return 0;
}