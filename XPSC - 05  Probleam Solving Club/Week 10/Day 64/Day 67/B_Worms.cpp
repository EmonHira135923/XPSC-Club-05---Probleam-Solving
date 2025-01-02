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

    int n;
    cin >> n;
    
    vector<int> myvalue(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> myvalue[i];
    }
    
    vector<int> mycode(n);
    mycode[0] = myvalue[0];
    for (int i = 1; i < n; i++) 
    {
        mycode[i] = mycode[i - 1] + myvalue[i];
    }
    
    int m;
    cin >> m;
    
    vector<int> queries(m);
    for (int i = 0; i < m; i++) 
    {
        cin >> queries[i];
    }
    
    for (int i = 0; i < m; i++) 
    {
        int q = queries[i];
        int left = 0, right = n - 1;
        while (left < right) 
        {
            int mid = (left + right) / 2;
            if (mycode[mid] < q) 
            {
                left = mid + 1;
            } 
            else 
            {
                right = mid;
            }
        }
        cout << left + 1 << endl;
    }

    return 0;
}