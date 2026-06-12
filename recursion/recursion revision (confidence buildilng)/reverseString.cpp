#include <bits/stdc++.h>

std::string reverseString(std::string,int,int); 

int main()
{ 
    std::string s; 
    std::getline(std::cin,s); 
    std::cout<< "The reverse of " << s << " is : " << reverseString(s,0,s.size()-1) << '\n'; 
}

std::string reverseString(std::string s, int start,int end)
{ 
    if (start>=end)
        return s; 
    std::swap(s[start],s[end]); 
    return reverseString(s,start+1,end-1); 
}