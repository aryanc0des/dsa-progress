#include<bits/stdc++.h>
using namespace std;

//return the lenght of the substring that contains only vowels

int substring_vowels(string str){
    int currentL = 0;
    int maxLenght = 0;

    for (int i = 1; i < str.size(); i++)
    {
        char c = str[i];
        if (c == 'a' || 'e' || 'i' || 'o' || 'u')
        {
            currentL++;
            maxLenght = max(currentL, maxLenght);
        }
        else{
            currentL = 0;
        }
    }
    
    return maxLenght;
}