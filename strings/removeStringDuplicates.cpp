#include <iostream> 
using namespace std; 

void removeStringDuplicates(string& s); 

int main()
{ 
    string s; 
    cout<< "Enter a string: "; 
    getline(cin,s); 
    cout<< "Before Removal : " << s << "\n"; 
    removeStringDuplicates(s); 
    cout<< "After Removal : " << s << "\n"; 
}

void removeStringDuplicates(string& s)
{ 
    for (int i=0;i<s.length(); i++)
    { 
        bool dup=false; 
        for (int j=0; j<i; j++)
        { 
            if (s[i]==s[j])
            { 
                dup=true; 
                break; 
            } 
        }
        if (dup)
        { 
            for (int j=i; j<s.length()-1; j++)
            { 
                s[j]=s[j+1]; 
            }
            s.pop_back(); 
            i--; 
        } 
    }
}