#include <bits/stdc++.h> 
using std::cout, std::cin, std::string, std::vector; 

void solve(const string& digits, string& output, int index, vector<string>& ans, const vector<string>& keypad_mapping)
{
    if (index>=digits.size())
    { 
        ans.push_back(output);
        return;
    }

    int digit=digits[index]-'0';
    string mapping=keypad_mapping[digit];
    for (int i=0; i<mapping.size();i++)
    { 
        output.push_back(mapping[i]);
        solve(digits,output,index+1,ans,keypad_mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    string output;
    int index=0;
    vector<string> keypad_mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits,output,index,ans,keypad_mapping);
    return ans;
}


int main()
{ 
    string digits= "89"; 
    auto ans= letterCombinations(digits); 
    for (auto x : ans)
    { 
        cout<< x << "\n"; 
    }
}
