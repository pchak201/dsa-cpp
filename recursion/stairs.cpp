#include <iostream>
using std::cout, std::cin; 

int climbStairs(int n);

int main()
{ 
    int n; 
    cout<< "Enter the number of stairs : "; 
    cin>>n; 
    cout<< "Number of steps taken to climb " << n << " stairs is : " << climbStairs(n) << '\n'; 
}

int climbStairs(int n)
{ 
    if (n==0)
        return 1; 
    else if (n==-1)
        return 0; 
    return climbStairs(n-1) + climbStairs(n-2); 
}

// the solution is correct but not optimized - so it doesn't pass the leetcode test cases - dynamic programming fixed this