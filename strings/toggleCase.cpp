#include <iostream>
using namespace std; 

char toLower(char); 
char toUpper(char); 
void toggleCase(string&); 

int main()
{ 
    string s; 
    cout<< "Enter a string : "; 
    getline(cin, s); 
    toggleCase(s); 
    cout<< s; 
}

char toLower(char ch)
{ 
    if (ch>='A' && ch<='Z')
    { 
        return ch+32; 
    }
    return ch; 
}

char toUpper(char ch)
{ 
    if (ch>='a' && ch<='z')
    { 
        return ch-32; 
    }
    return ch; 
}

void toggleCase(string& s)
{ 
    for (int i=0; i<s.length(); i++)
    { 
        if (s[i]>='a' && s[i]<='z')
            s[i]=toUpper(s[i]); 
        else 
            s[i]=toLower(s[i]); 
    }
}