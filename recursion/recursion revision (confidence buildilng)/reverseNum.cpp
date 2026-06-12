#include <bits/stdc++.h>

int reverseNum(int n,int rev=0); 

int main()
{ 
    int n; 
    std::cout<< "Enter a number : "; 
    std::cin>> n; 
    std::cout<< "The reverse of " << n << " is " << reverseNum(n) << '\n'; 
}

int reverseNum(int n,int rev)
{ 
    if (n<=0)
        return rev;
    rev=(rev*10)+(n%10); 
    return reverseNum(n/10,rev ); 
}