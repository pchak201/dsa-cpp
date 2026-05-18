#include <iostream> 
using namespace std; 

void maxOccurringChar(const string&); 

int main()
{ 
    string s; 
    cout<< "enter a string : "; 
    getline(cin,s); 
    maxOccurringChar(s); 
}

void maxOccurringChar(const string& s)
{
    int index=0,max=0; 
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
            if (count>max)
            { 
                max=count;
                index=i; 
            }
        }
    }
    cout<< "The max element is " << s[index] << " and it appears " << max << " times\n"; 
}

