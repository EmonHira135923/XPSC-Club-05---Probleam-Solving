#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

bool solve(string a, string b) 
{
    if (b.size() < a.size()) return false;

    vector<int> freq_a(26, 0), freq_b(26, 0);

    for (char c : a) freq_a[c - 'a']++;

    for (int i = 0; i < a.size(); i++) freq_b[b[i] - 'a']++;

    if (freq_a == freq_b) return true;

    for (int i = a.size(); i < b.size(); i++) 
    {
        freq_b[b[i] - 'a']++;
        freq_b[b[i - a.size()] - 'a']--;

        if (freq_a == freq_b) return true;
    }
    return false;
}

int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        string word,Word;
        cin >> word >> Word;

        if(solve(word,Word)) cout << "YES" << endl;
        else cout << "NO"<< endl;
    }

    return 0;
}