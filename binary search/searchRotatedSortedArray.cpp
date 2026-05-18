#include <iostream> 
using std::cout, std::cin; 

int searchRotatedSortedArray(int*,int,int);
int pivotElement(int*,int); 
int binarySearch(int* arr, int start, int end, int key); 

int main()
{ 
    int arr1[]={1,2,3,7,9}; 
    int arr2[]={7,9,1,2,3}; 
    int n=sizeof(arr1)/sizeof(arr1[0]); 
    int key; 
    cout<< "Enter a key : "; 
    cin>> key; 
    int index=searchRotatedSortedArray(arr2,n,key); 
    if (index!=-1)
        cout<< key << " is in index : " << index << '\n'; 
    else 
        cout<< key << " is not in the array\n"; 

}

int searchRotatedSortedArray(int* arr, int n, int key)
{ 
    int start=0, end=n-1, mid; 
    int pivot=pivotElement(arr,n), index; 
    if (key>=arr[pivot] && key<=arr[n-1])
    { 
        index=binarySearch(arr,pivot,n-1,key); 
    }
    else 
    {
        index=binarySearch(arr,0,pivot-1,key); 
    } 
    return index; 
} 

int pivotElement(int* arr,int n)
{
    int start=0, end=n-1, mid; 
    while (start<end)
    { 
        mid=start+(end-start)/2; 
        if (arr[mid]>arr[0])
            start=mid+1; 
        else if (arr[mid]<arr[n-1])
            end=mid; 
    } 

    return start; 
}

int binarySearch(int* arr, int start, int end, int key)
{ 
    int mid; 
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