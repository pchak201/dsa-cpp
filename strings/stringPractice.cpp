#include <iostream> 
#include <string> 
using namespace std; 

int getLength(char*); 
void reverse(char*); 
bool palindromeCheck(char*); 
char toLower(char); 

int main()
{ 
    char str[100]; 
    cout<< "Enter you name : "; 
    cin.getline(str,100); 
    cout<< "Your name is : " << str << "\n"; 
    cout<< "The length of your name is : " << getLength(str) << '\n'; 
    cout<< "Character array before reverse : " << str << '\n'; 
    reverse(str); 
    cout<< "Character array after reverse : " << str << '\n'; 
    cout<< "The char array is a palindrome : " << boolalpha << palindromeCheck(str) << "\n"; 
    cout<< toLower('A'); 
}


int getLength(char* str)
{ 
    int i; 
    for (i=0; str[i]!='\0'; i++); 
    return i;
}

void reverse(char* str)
{ 
    int n= getLength(str); 
    for (int i=0; i<n/2; i++)
    { 
        int temp=str[i]; 
        str[i]=str[n-1-i]; 
        str[n-1-i]=temp; 
    }
}
 
bool palindromeCheck(char* str)
{ 
    int n=getLength(str); 
    for (int i=0; i<n/2; i++)
    { 
        if (str[i]!=str[n-1-i]) return false ;
    }
    return true; 
}

char toLower(char ch )
{ 
    if (ch>='A' && ch<='Z')
    { 
        return ch+ 32; 
    }
    return ch ; 
}
