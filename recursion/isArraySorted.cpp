#include <iostream> 
using std::cout, std::cin; 

bool isSorted(int*,int); 

int main()
{ 
    int arr[]={2,4,6,9,11}; 
    int size=sizeof(arr)/sizeof(arr[0]); 
    if (isSorted(arr,size))
        cout<< "The array is sorted\n"; 
    else 
        cout<< "The array is not sorted" ; 
}

bool isSorted(int* arr,int size)
{ 
    if (size<=1)
        return true; 
    else if (arr[0]>arr[1])
        return false; 
    else 
        return isSorted(arr+1,size-1); 
}