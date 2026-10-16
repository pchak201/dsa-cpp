#include <iostream> 
#include <algorithm>
#include <vector>
#include <string.h> 
using std::vector,std::string;

bool isPalindrome(string s) 
{
    int left=0,right=s.size()-1;
    while(left<right)
    { 
        while (left<right && std::isalnum(s[left])==false)
            left++;
        while (left<right && std::isalnum(s[right])==false)
            right--; 
        if (std::tolower(s[left])!=std::tolower(s[right]))
            return false;
        left++; 
        right--;
    }
    return true;
}