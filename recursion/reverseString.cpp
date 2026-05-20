#include <iostream> 
using std::cout,std::cin,std::string,std::swap; 

string reverseString(string,int,int); 

int main()
{ 
    string s; 
    cout<< "Enter a string : "; 
    getline(cin,s); 
    cout<< '\n'; 
    cout<< "The reverse of " << s  << " is : \n" << reverseString(s,0, s.length()-1); 
}

string reverseString(string s, int start, int end)
{   
    if (start>=end)
        return s; 
    swap(s[start],s[end]); 
    return reverseString(s,++start,--end); 
}