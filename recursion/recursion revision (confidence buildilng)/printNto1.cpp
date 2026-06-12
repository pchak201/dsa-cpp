#include <iostream> 

void printEven(int); 
int main()
{ 
    int n; 
    std::cout<< "Enter a number : "; 
    std::cin>> n; 
    printEven(n); 
}

void printEven(int n)
{ 
    if (n<0)
        return; 
    std::cout<< "going down the stack " << n << "\n"; 
    printEven(n-1); 
    std::cout<< "coming up the stack " << n << "\n "; 
}