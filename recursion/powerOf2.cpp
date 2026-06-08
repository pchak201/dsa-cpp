#include <iostream>

using std::cout, std::cin; 

int powerOf2(int); 

int main()
{ 
    int n; 
    cout<< "Enter a number : " ; 
    cin>>n; 
    cout<< "2 to the power of " << n << " is : " << powerOf2(n); 
}

int powerOf2(int n)
{ 
    if (n==0)
        return 1 ; 
    return 2*powerOf2(n-1); 
}