#include <iostream> 
using namespace std; 

void freqeachelem(const string&); 

int main()
{ 
    string s; 
    cout<< "enter a string : "; 
    getline(cin,s); 
    freqeachelem(s); 
}

void freqeachelem(const string& s)
{
    for (int i=0; i<s.length(); i++)
    { 
        bool counted=false; 
        int count=0; 
        for (int j=0; j<i;j++)
        { 
            if (s[i]==s[j])
            { 
                counted=true; 
                break; 
            }
        }
        if (!counted)
        { 
            for (int j=0 ;j<s.length(); j++)
            { 
                if (s[i]==s[j])
                    count++; 
            }
            cout<< s[i]<< " appears " << count << " number of times\n"; 
        }
    }
}

