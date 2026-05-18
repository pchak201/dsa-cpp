#include <iostream> 
using std::cout, std::cin; 

bool Level2BinarySearch(int[][5],int,int,int); 

int main()
{ 
    int arr[5][5] = {
    {1,4,7,11,15},
    {2,5,8,12,19},
    {3,6,9,16,22},
    {10,13,14,17,24},
    {18,21,23,26,30}}; 

};

bool Level2BinarySearch(int arr[][5],int row,int col,int target)
{ 
    int r=0, c=col-1,index,elem; 
    while (r<row && c>=0)
    {
        elem=arr[r][c]; 
        if (elem==target)
            return true; 
        else if (elem<target)  
            r++; 
        else if (elem>target)  
            c--; 
    }
    return false;
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