//letter combinations of a phone number 

#include <bits/stdc++.h>
using std::string,std::vector,std::cout; 

void letterEquivalent(string digits,int index,string output, vector<string>& ans); 
vector<string> letterCombinations(string digits) ; 

int main()
{
    string digits = "23"; 
    cout<< "The viable phone numbers are : \n" ; 
    vector<string> ans = letterCombinations(digits);  
    for (string s : ans)
    { 
        cout<< s << "\n"; 
    }
    cout<< "\n"; 
}

vector<string> letterCombinations(string digits) 
{
    int index=0; 
    string output; 
    vector<string> ans; 
    letterEquivalent(digits,index,output,ans); 
    return ans; 
}

void letterEquivalent(string digits,int index,string output, vector<string>& ans)
{ 
    vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    if (index==digits.size())
    {   
        ans.push_back(output); 
        return; 
    }
    int digit = digits[index]- '0'; 

    for (int i=0; i< keypad[digit].length();i++)
    { 
        output.push_back(keypad[digit][i]); 
        letterEquivalent(digits,index+1,output,ans); 
        output.pop_back(); 
    }
}
