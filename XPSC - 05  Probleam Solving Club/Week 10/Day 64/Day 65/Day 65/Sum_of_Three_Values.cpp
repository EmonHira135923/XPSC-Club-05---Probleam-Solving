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

    int N,K;
    cin >> N >> K;

    vector<pair<int,int>> myvalue(N);
    for(int i=0;i<N;i++)
    {
        cin >> myvalue[i].first;
        myvalue[i].second = i+1;
    }

    sort(myvalue.begin(),myvalue.end());

    for (int i = 0; i < N; i++) 
    {
        int target = K - myvalue[i].first;
        int left = i + 1, right = N - 1;

        while (left < right) 
        {
            int sum = myvalue[left].first + myvalue[right].first;
            if (sum == target) 
            {
                cout << myvalue[left].second << " " << myvalue[right].second << " " << myvalue[i].second << endl;
                return 0;
            }
            if (sum < target) 
            {
                left++;
            } 
            else 
            {
                right--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;



    return 0;
}