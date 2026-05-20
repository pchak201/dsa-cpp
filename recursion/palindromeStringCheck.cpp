#include <iostream> 
using std::cout, std::cin, std::string; 

bool palindromeCheck(const string&,int,int); 
int main()
{ 
    string s ; 
    cout<<"Enter a string : "; 
    getline(cin,s); 
    if (palindromeCheck(s,0,s.length()-1))
        cout<< s << " is a palindrome\n"; 
    else 
        cout<< s << " is not a palindrome\n"; 
}

bool palindromeCheck(const string &s, int start, int end)
{
    if (start>=end)
        return true; 
    if (s[start]!=s[end])
        return false;
    return palindromeCheck(s,++start,--end); 
}