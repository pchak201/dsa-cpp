#include <iostream>
using namespace std; 

bool palindromeCheck(const string&); 
char toLower(char);  
bool alphaNumericCheck(char); 

int main()
{ 
    string s; 
    cout<< "Enter a string: "; 
    getline(cin,s); 
    if (palindromeCheck(s)) 
        cout<<s << " is a palindrome\n"; 
    else 
        cout<<s << " is not a palindrome\n"; 
}

bool palindromeCheck(const string& s)
{ 
    int start=0, end=s.length()-1; 
    while (start<end)
    { 
        while (start<end && !alphaNumericCheck(s[start]))
            start++; 
        while (start<end && !alphaNumericCheck(s[end]))
            end--;  
        if (toLower(s[start])!=toLower(s[end]))
            return false ; 
        start++; end--; 
    }
    return true; 
}

char toLower(char ch)
{ 
    if (ch>='A' && ch<='Z')
        return ch+32; 
    return ch; 
}

bool alphaNumericCheck(char ch)
{ 
    ch = toLower(ch); 
    if ((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        return true; 
    return false; 
}