#include <bits/stdc++.h>
using std::cout, std::cin, std::vector,std::string; 


vector<string> subsequences(string); 
void findSubstring(const string& str, string& substring, int index, vector<string>& ans);

int main()
{ 
    string str = "ab"; 
    cout<< "the non-empty subsequences of the given string are : \n" ; 
    vector<string> ans = subsequences(str); 
    for (string s : ans)
    { 
        cout<< s << "\n"; 
    }
}

void findSubstring(const string& str, string& substring, int index, vector<string>& ans)
{ 
    if (index>=str.size())
    { 
        if (!substring.empty())
            ans.push_back(substring);
        return;
    }
    // include
    substring.push_back(str[index]);
    findSubstring(str,substring,index+1,ans);
    substring.pop_back();
    // exclude
    findSubstring(str,substring,index+1,ans);
}

vector<string> subsequences(string str)
{
    vector<string> ans;
    string substring;
    int index=0;
    findSubstring(str,substring,index,ans);
    return ans;
}