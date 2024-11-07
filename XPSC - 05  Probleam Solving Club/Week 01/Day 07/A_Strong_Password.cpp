#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string ar;
        cin >> ar;
        if(ar.length()==1)
        {
            if(ar[0] != 'z')
            {
                ar+=ar[0]+1;
            }
            else
            {
                ar+=ar[0]-1;
            }
        }
        else
        {
            bool flag = false;
            for(int i =0;i<ar.length()-1;i++)
            {
                if(ar[i]==ar[i+1])
                {
                    if(ar[i] != 'z')
                        ar.insert(i+1,1,ar[i]+1);
                    else
                        ar.insert(i+1,1,ar[i]-1);
                    flag = true;
                    break;
                }
            }
            if(flag == false)
            {
                if(ar[ar.length()-1] != 'z')
                    ar+=ar[ar.length()-1]+1;
                else
                    ar+=ar[ar.length()-1]-1;
            }
        }
        cout<<ar<<endl;
    }
    return 0;
}
