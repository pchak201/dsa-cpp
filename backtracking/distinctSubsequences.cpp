#include <bits/stdc++.h>
using namespace std; 
int numDistinct(string,string); 
int subsequences(string s,string t); 
void solve(const string& s, string& output, int index, int& ans,string t); 
int numDistinct(string s, string t) ; 


/// NOTE : this solution runs perfectly but is not within the time constraints 
// this is the most I could optimize it for now
// This can be fixed using DP
// however, I do not know that yet so I'll leave this be for now

int main()
{ 
    string s = "abc"; 
    string t= "a"; 
    auto ans = subsequences(s,t); 
    cout<< "Number of distinct subsequences are : " << ans;  
}

int numDistinct(string s, string t) 
{
    int count = subsequences(s,t); 
    return count; 
}

int subsequences(string s,string t)
{
    int ans=0; 
    int index=0; 
    string output;
    solve(s,output,index,ans,t); 
    return ans; 
}

void solve(const string& s, string& output, int index, int& ans,string t)
{ 
    if (index==s.size())
    { 
        if (output==t)
            ans++;
        return; 
    }
    // include 
    output.push_back(s[index]); 
    solve(s,output,index+1,ans,t); 
    output.pop_back(); 
    // exclude
    solve(s,output,index+1,ans,t); 
}


