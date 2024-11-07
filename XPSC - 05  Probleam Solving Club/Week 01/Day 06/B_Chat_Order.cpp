#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        deque<pair<int,char>> dq1; //small
        deque<pair<int,char>> dq2;  // capital
        int start = 1;
        for(char ch:s){
            if(ch=='b' && !dq1.empty()){
                 dq1.pop_back();
            }else if(ch=='B' && !dq2.empty()){
                dq2.pop_back();
            }else if(ch!='b' && ch!='B'){
                if(islower(ch)){
                    dq1.push_back({start,ch});
                }else{
                    dq2.push_back({start,ch});
                }
                start++;
            }
        }
        vector<pair<int,char>> combined;
        for(auto val:dq1){
             combined.push_back({val.first,val.second});
        }
        for(auto val:dq2){
             combined.push_back({val.first,val.second});
        }
        sort(combined.begin(),combined.end());
        for(auto val:combined){
            cout<<val.second;
        }
        cout<<'\n';
    }

    return 0;
}