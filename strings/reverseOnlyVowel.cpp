#include <iostream> 
using namespace std; 

void reverseOnlyVowel(string&); 
char toLower(char); 
bool vowelCheck(char); 

int main()
{ 
    string s ; 
    cout<< "Enter a string : "; 
    getline(cin,s); 
    cout<< "String before reverse : " << s<< "\n"; 
    reverseOnlyVowel(s); 
    cout<< "String after reverse : " << s << "\n" ; 
}

void reverseOnlyVowel(string& s)
{
    int start=0, end=s.length()-1; 
    while (start<end)
    { 
        char elem1=s[start], elem2=s[end]; 
        while (!vowelCheck(elem1) && start<end)
        { 
            start++; 
            elem1=s[start]; 
        }
        while (!vowelCheck(elem2) && start<end)
        { 
            end--; 
            elem2=s[end]; 
        }
        swap(s[start],s[end]); 
        start++; end--; 
    }
}

char toLower(char ch)
{ 
    if (ch>='A' && ch<='Z')
        return ch+32; 
    return ch ;
}

bool vowelCheck(char ch)
{ 
    ch = toLower(ch); 
    if (ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
        return true; 
    return false; 
}