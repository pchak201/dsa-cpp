#include <iostream> 
using namespace std; 

bool anagramCheck(const string&, const string&); 

int main()
{ 
    string s1,s2; 
    cout<< "Enter the first string : "; 
    getline(cin,s1); 
    cout<< "Enter the second string : ";
    getline(cin,s2); 
    if (anagramCheck(s1,s2))
        cout<< s1 << " and " << s2 << " are anagrams\n"; 
    else 
        cout<< s1 << " and " << s2 << " are not anagrams\n"; 
}

bool anagramCheck(const string& s1, const string& s2)
{ 
    if (s1.length()!=s2.length())
        return false; 
    for (int i=0;i<s1.length();i++)
    { 
        int c1=0,c2=0; 
        bool counted=false; 
        for (int j=0; j<i; j++)
        {
            if (s1[j]==s2[i]) 
            { 
                counted=true; 
                break; 
            }
        } 
        if (!counted)
        {
            for (int j=0; j<s1.length(); j++)
            {
                if (s1[i]==s1[j])   c1++; 
            } 

            for (int j=0;j<s2.length();j++)
            { 
                if (s2[j]==s1[i])   c2++; 
            }

            if (c1!=c2)  
                return false; 
        } 
    }
    return true; 
}