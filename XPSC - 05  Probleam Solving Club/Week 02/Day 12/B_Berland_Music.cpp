#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> p[i];
    }
    
    string s;
    cin >> s;
    
    vector<pair<int, int>> liked_songs, disliked_songs;
    
    for (int i = 0; i < n; i++) 
    {
        if (s[i] == '1') 
        {
            liked_songs.push_back({p[i], i});
        } 
        else 
        {
            disliked_songs.push_back({p[i], i});
        }
    }

    sort(liked_songs.begin(), liked_songs.end());
    sort(disliked_songs.begin(), disliked_songs.end());
    
    vector<int> q(n);
    int rating = 1;

    for (auto &song : disliked_songs) 
    {
        q[song.second] = rating++;
    }

    for (auto &song : liked_songs) 
    {
        q[song.second] = rating++;
    }
    for (int i = 0; i < n; i++) 
    {
        cout << q[i] << " ";
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}