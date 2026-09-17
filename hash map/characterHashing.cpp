#include <iostream> 
#include <vector>
#include <string.h> 
#include <map>

int main() 
{  
    // assume there are only lower case letters
    std::map <std::string,int> m;
    std::string s = "abcdefg";
    for (int i=0; i<s.size(); i++)
    {
        m[s[i]]++;
    }
    std::cout<< "The string is : " << s << "\n";
    char key ;
    std::cout<<"Enter the key: ";
    std::cin>> key;
    if (key<'a' or key>'z')
    { 
        std::cout<< "input is wrong \n";
        return 0;
    }
    std::cout<< key << " appears in the string " << m[key] <<" number of times\n";
}