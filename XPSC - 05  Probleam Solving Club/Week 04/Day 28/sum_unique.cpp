#include<bits/stdc++.h>
using namespace std;

int longestSubstringWithKUniqueChars(string s, int k) 
{
    unordered_map<char, int> freq;
    int start = 0, maxLength = -1;

    for (int end = 0; end < s.size(); end++) 
    {
        freq[s[end]]++;

        while (freq.size() > k) 
        {
            freq[s[start]]--;
            if (freq[s[start]] == 0) 
            {
                freq.erase(s[start]);
            }
            start++;
        }

        if (freq.size() == k) 
        {
            maxLength = max(maxLength, end - start + 1);
        }
    }

    return maxLength;
}

int main() 
{
    string s;
    int k;
    cin >> s >> k;

    int result = longestSubstringWithKUniqueChars(s, k);
    cout << result << endl;

    return 0;
}
