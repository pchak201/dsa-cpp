#include <iostream> 
using std::cout, std::cin; 

int optimizedPower(int,int); 

int main()
{ 
    int n, p; 
    cout<< "Enter a number : "; 
    cin>>n; 
    cout<< "Enter its power : "; 
    cin>>p; 
    cout<< n << "^" << p << "=" << optimizedPower(n,p); 
}

int optimizedPower(int n,int p)
{ 
    if (p==0)
        return 1; 
    int half=optimizedPower(n,p/2); 
    if (p%2==0)
        return half*half; 
    else 
        return n*half*half; 
}