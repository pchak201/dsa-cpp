#include <iostream> 
using std::cout, std::cin, std::endl, std::string;  

void sayDigits(int); 

int main()
{ 
    int n; 
    cout<<"Enter a number : " ;
    cin>>n; 
    sayDigits(n); 
}

void sayDigits(int n)
{ 
    string digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n==0)
        return; 
    sayDigits(n/10); 
    cout<< digits[n%10] << " " ; 
}