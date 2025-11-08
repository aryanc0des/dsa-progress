#include<bits/stdc++.h>
using namespace std;

// You are given a list of email usernames.
// Group usernames that contain the same characters, regardless of order.
// vector<vector<string>> groupUsers(vector<string>& users);
// ["alpha", "lphaa", "world", "drowl", "cat", "tac", "act"]
// [
//   ["alpha", "lphaa"],
//   ["world", "drowl"],
//   ["cat", "tac", "act"]
// ]

vector<vector<string>> groupUsers(vector<string> user){
    unordered_map<string, vector<string>> x;

    for (int i = 0; i < user.size(); i++)
    {
        string key = user[i];
        sort(key.begin(), key.end());
        x[key].push_back(user[i]);
    }

    vector<vector<string>> result;

    for(auto &entry : x){
        result.push_back(entry.second);
    }
    
    return result;
}