#include<bits/stdc++.h>
using namespace std;

int longest_substring(string str){
    unordered_map<char, int> freq;
    int L = 0;
    freq[str[L]]++;
    int maxLen = 0;

    for (int i = 1; i < str.size(); i++)
    {
        freq[str[i]]++;

        for(auto &entry : freq){
            if (entry.second > 1)
            {
                entry.second--;
                L++;
            }
            
        }

        maxLen = max(maxLen, i-L+1);
    }
    
    return maxLen;
    
}