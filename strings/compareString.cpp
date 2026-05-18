#include <iostream> 
using namespace std; 

bool compareString(string,string); 

int main()
{ 
    string s1,s2; 
    cout << "Enter the first string : "; getline(cin,s1); 
    cout << "Enter the second string : "; getline(cin,s2); 
    if (compareString(s1,s2))
        cout<< "Both are same\n"; 
    else        
        cout<< "Both are not same\n"; 
}

bool compareString(string s1, string s2)
{ 
    if (s1.length()!=s2.length())
        return false; 
    for (int i=0 ; i<s1.length(); i++)
    { 
        if (s1[i]!=s2[i])
            return false ;
    }
    return true; 
}