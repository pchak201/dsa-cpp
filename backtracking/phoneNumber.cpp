#include <bits/stdc++.h> 
using std::cout, std::cin, std::string, std::vector; 

vector<string> letterCombinations(string digits); 
void solve(const string &digits, int index, string& output,vector<string>& ans, const vector<string>& keypad_mapping); 

int main()
{ 
    string digits= "44"; 
    auto ans= letterCombinations(digits); 
    for (auto x : ans)
    { 
        cout<< x << "\n"; 
    }
    cout<< "\n"; 
}

vector<string> letterCombinations(string digits)
{ 
    int index=0; 
    vector<string> ans; 
    string output; 
    vector<string> keypad_mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits,index,output,ans,keypad_mapping); 
    return ans; 
}

void solve(const string &digits, int index, string& output,vector<string>& ans, const vector<string>& keypad_mapping)
{ 
    if (index==digits.size())
    { 
        ans.push_back(output); 
        return; 
    }
    int digit = digits[index] - '0'; 
    string mapping= keypad_mapping[digit]; 
    for (int i=0; i<mapping.size();  i++)
    { 
        output.push_back(mapping[i]); 
        solve(digits,index+1,output,ans,keypad_mapping); 
        output.pop_back(); 
    }
}

