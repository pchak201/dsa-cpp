#include <iostream> 
using std::cout, std::cin; 

void firstAndLastOccurrence(int*,int,int); 

int main()
{ 
    int arr[]={1,2,3,3,3,4,5}; 
    int key; 
    cout<< "Enter the key to be searched : "; 
    cin>> key; 
    firstAndLastOccurrence(arr,sizeof(arr)/sizeof(arr[0]),key); 
}


void firstAndLastOccurrence(int* arr, int n, int key)
{ 
    int start=0, end=n-1, mid, first=-1, last=-1; 
    while(start<=end)
    { 
        mid=start+(end-start)/2; 
        if (arr[mid]==key)
        { 
            first=mid; 
            end=mid-1; 
        } 
        else if (arr[mid]>key)
            end=mid-1; 
        else if (arr[mid]<key)
            start=mid+1; 
    }
    start=0, end=n-1; 
    while(start<=end)
    { 
        mid=start+(end-start)/2; 
        if (arr[mid]==key)
        { 
            last=mid; 
            start=mid+1; 
        } 
        else if (arr[mid]>key)
            end=mid-1; 
        else if (arr[mid]<key)
            start=mid+1; 
    }
    cout << "First Occurrence is at index : " << first << '\n'; 
    cout << "Last Occurrence is at index : " << last << '\n'; 
}