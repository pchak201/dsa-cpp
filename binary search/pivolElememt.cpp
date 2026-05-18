#include <iostream> 
using std::cout, std::cin; 

int pivotElement(int*,int); 

int main()
{ 
    int arr1[]={1,2,3,7,9}; 
    int arr2[]={7,9,1,2,3}; 
    int n=sizeof(arr1)/sizeof(arr1[0]); 
    int pivot=pivotElement(arr2,n); 
    cout<< "The pivot element is : " << arr2[pivot];  
}

int pivotElement(int* arr2,int n)
{
    int start=0, end=n-1, mid; 
    while (start<end)
    { 
        mid=start+(end-start)/2; 
        if (arr2[mid]>arr2[0])
            start=mid+1; 
        else if (arr2[mid]<arr2[n-1])
            end=mid; 
    } 
    return start; 
}