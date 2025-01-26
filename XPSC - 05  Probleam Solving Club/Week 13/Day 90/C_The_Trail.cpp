#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;
const int N=1010;
int n,m;
ll a[N][N];
void Solve(){
    cin>>n>>m;
    string s;
    cin>>s;
    s+='R';
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>a[i][j];
        }
    }
    
    int x=1,y=1;
    for(auto c:s){
        if(c=='R'){
            for(int i=1;i<=n;++i){
                if(i==x)continue;
                a[x][y]-=a[i][y];
            }
            ++y;
        }
        else{
            for(int i=1;i<=m;++i){
                if(i==y)continue;
                a[x][y]-=a[x][i];
            }
            ++x;
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }
}
int main()
{
    FASTIO;

    int T;
    cin>>T;
    while(T--)Solve();
    return 0;
}
