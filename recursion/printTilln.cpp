#include <iostream> 
using std::cout, std::cin; 

void countReverse(int); 
void count(int); 

int main()
{ 
    int n; 
    cout<< "Till what number do you want the count to be ? "; 
    cin>>n; 
    countReverse(n); 
    cout<< '\n'; 
    count(n); 
    cout<< '\n'; 
}

void countReverse(int n)
{ 
    if (n==0)
        return ; 
    cout<<n << " "; 
    count(n-1); 
}

void count(int n)
{ 
    if (n==0)
        return; 
    count(n-1); 
    cout << n << " "; 
}