#include <iostream>
#include <vector> 
using std::cout, std::cin,std::vector; 

// bool binarySearch(vector<int>,int); 
bool binarySearch(vector<int>,int,int,int); 

int main()
{ 
    vector<int> arr={2,4,6,10,14,16,21,40,50}; 
    int size=sizeof(arr)/sizeof(arr[0]); 
    int key;    
    cout<< "Enter the key to be searched : "; 
    cin>>key; 
    if(binarySearch(arr,key,0,(int)arr.size()-1))
        cout<< key<< " is present in the array\n"; 
    else
        cout<< key<< " is not present in the array\n"; 
}

// bool binarySearch(vector<int> arr,int key,int end, int start)
// { 
//     int mid=start+(end-start)/2; 
//     if (start>end)
//         return false; 
//     if (arr[mid]==key)
//         return true; 
//     if (arr[mid]>key)
//         return binarySearch(arr,key,mid-1,start);
//     else 
//         return binarySearch(arr,key,end,mid+1); 
// }

// bool binarySearch(vector<int> arr,int key)
// { 
//     int start=0,end=arr.size()-1,mid; 
//     while (start<=end)
//     { 
//         mid=(start+end)/2; 
//         if (arr[mid]==key)
//             return true; 
//         if (arr[mid]>key)
//             end=mid-1; 
//         else if (arr[mid]<key)
//             start=mid+1; 
//     }
//     return false; 
// }

bool binarySearch(vector<int> arr,int key, int start, int end)
{ 
    int mid=(start+end)/2; 
    if (start>end)
        return false; 
    else if (arr[mid]==key)
        return true; 
    else if(arr[mid]>key)
        return binarySearch(arr,key,start,mid-1); 
    else 
        return binarySearch(arr,key,mid+1,end); 
}