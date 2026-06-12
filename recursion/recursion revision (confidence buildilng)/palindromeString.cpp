#include <bits/stdc++.h>

bool palindrome(std::string,int,int); 

int main()
{ 
    std::string s; 
    std::getline(std::cin,s); 
    std::cout<< s << " is a palindrome : " << std::boolalpha << palindrome(s,0,s.size()-1); 
}

bool palindrome(std::string s, int start,int end)
{ 
    if (start>=end)
        return true; 
    if (s[start]!=s[end]) 
        return false;
    return palindrome(s,start+1,end-1); 
}