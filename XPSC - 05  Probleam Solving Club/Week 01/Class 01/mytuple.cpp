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
    
    // tuple<string,string,string,int,int,int> myvalue = {"Emon","Hossain","Hira",23,189123,63};

    // cout << get<0>(myvalue) << " " << get<1>(myvalue) << " " << get<2>(myvalue) << " " << get<3>(myvalue) << " " << get<4>(myvalue) << " " << get<5>(myvalue) << endl;

    int N;
    cin >> N;

    tuple<string,string,string,int,int,int> myvalue[N];

    for(int i=0;i<N;i++)
    {
        cin.ignore();
        string a,b,c;
        getline(cin,a);
        getline(cin,b);
        getline(cin,c);
        int x,y,z;
        cin >> x >> y >> z;
        myvalue[i] = {a,b,c,x,y,z};
    }
    for(int i=0;i<N;i++)
    {
        cout << get<0>(myvalue[i]) << " " << get<1>(myvalue[i]) << " " << get<2>(myvalue[i]) << " " << get<3>(myvalue[i]) << " " << get<4>(myvalue[i]) << " " << get<5>(myvalue[i]) << endl;
    }

    return 0;
}