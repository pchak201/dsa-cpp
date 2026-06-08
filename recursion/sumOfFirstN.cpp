#include <iostream> 
using std::cout, std::cin; 

int recursiveSum(int); 

int main()
{
    int n; 
    cout<< "Enter a number : "; 
    cin>>n; 
    cout<< "The sum of first " << n << " elements is : " << recursiveSum(n); 
}

int recursiveSum(int n)
{ 
    if (n==0)
        return 0; 
    return n+recursiveSum(n-1); 
}