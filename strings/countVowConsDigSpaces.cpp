#include <iostream> 
using namespace std; 

void countElem(string);
char toLower(char); 
char toUpper(char); 

int main()
{ 
    string str; 
    cout<< "Enter a string : "; 
    getline(cin,str); 
    countElem(str); 
}

void countElem(string str)
{ 
    int v=0, d=0, s=0, c=0, sy=0;  
    for (int i=0; i<str.length(); i++)
    { 
        int elem=toUpper(str[i]); 
        elem=toLower(elem); 
        if (elem=='a' || elem=='e' || elem=='i' || elem=='o' || elem=='u' )
        { 
            v++; 
        }
        else if (elem>='0' && elem<'9')
        { 
            d++; 
        }
        else if (elem==' ')
        { 
            s++; 
        }
        else if (elem>='a' && elem<='z')
        { 
            c++; 
        }
        else 
        { 
            sy++; 
        }
    }
    cout<< "Number of vowels : " << v << "\n"; 
    cout<< "Number of consonants : " << c << "\n"; 
    cout<< "Number of digits : " << d << "\n"; 
    cout<< "Number of symbols : " << sy << "\n"; 
    cout<< "Number of spaces : " << s << "\n"; 
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