#include <iostream>
using std::cout, std::cin; 

int reverseInt(int,int=0); 

int main()
{ 
    int n; 
    cout<< "Enter a number : "; 
    cin>>n; 
    cout<< "The reverse of " << n << " is " << reverseInt(n); 
}

int reverseInt(int n, int rev)
{ 
    if (n==0)
        return rev; 
    return reverseInt(n/10,(rev*10)+n%10 ); 
}