#include <bits/stdc++.h>
using namespace std;


//vector<string> word = ["loop", "polo", "cat", "tac", "cool", "act"]

vector<vector<string>> group(vector<string> word){ //word is the input vector for all the strings 
    unordered_map<string, vector<string>> x;

    for (int i = 0; i < word.size(); i++)
    {
        string key = word[i];
        sort(key.begin() , key.end());
        x[key].push_back(word[i]);
    }
    
    vector<vector<string>> result;

    for (auto &entry : x)
    {
        result.push_back(entry.second);
    }
    
    return result;
}