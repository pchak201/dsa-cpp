#include <iostream>
using std::cout, std::cin; 

int sumArray(int*, int,int=0); 

int main()
{ 
    int arr[]= {1,2,3,4}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    cout<< "The sum of the elements of the array are : " << sumArray(arr,n); 
}

int sumArray(int *arr, int n, int sum)
{ 
    if (n==0)
        return sum; 
    else 
        sumArray(arr+1, n-1, sum+arr[0]); 
}