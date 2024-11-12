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
    
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    int N = arr.size(), l = 0, r = 0;
    vector<int> ans;
    queue<int> q;
    
    while(r < N)
    {
        if(arr[r] < 0)
        {
            q.push(arr[r]);
        }
        
        if(r - l + 1 == k)
        {
            if(!q.empty())
            {
                ans.push_back(q.front());
                if(arr[l] == q.front())
                {
                    q.pop();
                }
            }
            else
            {
                ans.push_back(0);
            }
            l++;
        }
        r++;
    }
    for(int i : ans) 
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
