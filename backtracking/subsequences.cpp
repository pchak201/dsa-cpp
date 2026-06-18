#include <bits/stdc++.h>
using std::cout, std::cin, std::vector,std::string; 


vector<string> subsequences(string); 
void findSubstring(string str, string substring, int index, vector<string>& ans); 

int main()
{ 
    string str = "abc"; 
    cout<< "the non-empty subsequences of the given string are : \n" ; 
    vector<string> ans = subsequences(str); 
    for (string s : ans)
    { 
        cout<< s << "\n"; 
    }
    cout<< "\n"; 
}

vector<string> subsequences(string str)
{
    int index=0; 
    vector<string> ans;  
    string substring; 
    findSubstring(str,substring,index,ans); 
    return ans; 
}

void findSubstring(string str, string substring, int index, vector<string>& ans)
{ 
    if (index==str.size())
    { 
        if (substring.empty()==false)
            ans.push_back(substring); 
        return; 
    }
    // exclude 
    findSubstring(str,substring,index+1,ans); 
    // include 
    substring.push_back(str[index]); 
    findSubstring(str,substring,index+1,ans); 
}