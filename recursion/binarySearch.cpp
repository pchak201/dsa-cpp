#include <iostream>
using std::cout, std::cin; 

bool binarySearch(int*,int,int,int=0); 

int main()
{ 
    int arr[]={2,4,6,10,14,16,21,40,50}; 
    int size=sizeof(arr)/sizeof(arr[0]); 
    int key;    
    cout<< "Enter the key to be searched : "; 
    cin>>key; 
    if(binarySearch(arr,key,size-1))
        cout<< key<< " is present in the array\n"; 
    else
        cout<< key<< " is not present in the array\n"; 
}

bool binarySearch(int *arr,int key,int end, int start)
{ 
    int mid=start+(end-start)/2; 
    if (start>end)
        return false; 
    if (arr[mid]==key)
        return true; 
    if (arr[mid]>key)
        return binarySearch(arr,key,mid-1,start);
    else 
        return binarySearch(arr,key,end,mid+1); 
}