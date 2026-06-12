#include <bits/stdc++.h> 

int sum(int); 

int main()
{ 
    int n; 
    std::cout<< "Enter the number : "; 
    std::cin>> n; 
    std::cout<< "The sum of digits of " << n << " is " << sum(n); 
}

int sum(int n)
{ 
    if (n<=0)
        return 0; 
    return n%10 + sum(n/10); 
}