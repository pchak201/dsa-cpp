#include <iostream>
#include <cmath> 
using std::cout, std::cin; 

int factorial (int); 

int main()
{ 
    int n; 
    cout<< "Enter a number : " ; 
    cin>>n; 
    cout<< "Factorial of " << n << " is : " << factorial(n); 
}

int factorial(int n)
{ 
    if (n==0)
        return 1 ; 
    else 
        return n*factorial(n-1); 
}