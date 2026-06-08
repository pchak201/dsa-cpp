#include <iostream> 
using std::cout , std ::cin, std::endl; 

void fibonacciNonRecursive(int); 
int fibonacciRecursive(int); 

int main()
{ 
    int n; 
    cout<< "Which fibonacci number do you want ? "; 
    cin>>n ; 
    // fibonacciNonRecursive(n); 
    cout<< endl; 
    cout<< "Element " << n << " is : " <<   fibonacciRecursive(n) << endl; 
}

void fibonacciNonRecursive(int n)
{ 
    int a=0,b=1,temp; 
    for (int i=0; i<n; i++) 
    {    
        temp=a+b; 
        a=b; 
        b=temp; 
    }
    cout<< a << " "; 
}

int fibonacciRecursive(int n)
{ 
    if (n==1)
        return 0; 
    else if (n==2)
        return 1; 
    // else if (n<=0)
    //     return -1; 
    return fibonacciRecursive(n-1)+ fibonacciRecursive(n-2); 
}