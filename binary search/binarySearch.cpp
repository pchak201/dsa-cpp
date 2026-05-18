#include <iostream> 
using std::cout, std::cin; 
const int MAX =100; 

int binarySearch(int*,int,int); 

int main()
{ 
    int arr[]={0,1,2,3,4,5,6,7,8,9} ; 
    int key; 
    cout<< "Enter the key to be searched : "; 
    cin>> key; 
    int index=binarySearch(arr, sizeof(arr)/sizeof(arr[0]), key); 
    if (index!=-1)
        cout<< key << " is at index " << index << '\n'; 
    else 
        cout<< key << " is not in the array\n"; 
}

int binarySearch(int* arr, int n, int key)
{ 
    int start=0, end=n-1, mid; 
    while(start<=end)
    { 
        mid=start+(end-start)/2; 
        if (arr[mid]==key)
            return mid;
        else if (arr[mid]>key)
            end=mid-1; 
        else if (arr[mid]<key)
            start=mid+1; 
    }
    return -1; 
}