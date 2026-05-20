#include <iostream> 
using std::cout, std::cin; 

// int power (int,int,int=1); 
int power (int,int); 
int main()
{ 
    int n,p; 
    cout<< "Enter a number : "; 
    cin>>n; 
    cout<< "Enter the power of that number : "; 
    cin>>p; 
    cout<< n << "^" << p << "=" << power(n,p); 
}

// Tail/ Accumulator Recursion
// int power(int n,int p,int ans)
// { 
//     if (p==0)
//         return ans; 
//     return power(n,p-1,n*ans); 
// }

// Head/ Non-Tail/ Classic Recursion
int power(int n,int p)
{ 
    if (p==0)
        return 1; 
    return n*power(n,p-1); 
}
