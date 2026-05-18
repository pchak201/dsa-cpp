#include <iostream> 
using namespace std; 

char nonRepeating(const string&); 

int main()
{ 
    string s; 
    cout<< "Enter a string : "; 
    getline(cin,s); 
    cout<< "The first non-repeating character is : " << nonRepeating(s); 
}

char nonRepeating(const string& s)
{ 
    for (int i=0; i<s.length(); i++)
    { 
        bool appeared_before=false; 
        int count=0; 
        for (int j=0; j<i; j++)
        { 
            if (s[i]==s[j])
                appeared_before=true; 
        }
        if (!appeared_before)
        { 
            for (int j=0; j<s.length(); j++)
            { 
                if (s[i]==s[j])
                    count++; 
            }
            if (count==1)
                return s[i]; 
        }
    }
    return '\0'; 
}