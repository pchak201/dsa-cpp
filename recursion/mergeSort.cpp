#include <iostream> 
#include <vector> 
#include <algorithm> 
using std::cout, std::cin, std::vector,std::sort; 

void mergeSort(vector<int>&,int,int); 
void mergeSortedArray(vector<int>&,int,int,int); 

int main()
{ 
    vector<int> arr = {2,5,1,6,1,5,7,17,1,5,6,2,0,5}; 
}


void mergeSort(vector<int>& arr,int start,int end)
{ 
    if (start>=end)
        return; 
    int mid = (start+end)/2; 
    mergeSort(arr,start,mid); 
    mergeSort(arr,mid+1,end); 
    mergeSortedArray(arr,start,mid,end); 
}

void mergeSortedArray(vector<int>& arr, int start, int mid, int end)
{ 
    vector<int> arr1; 
    for (int i=start; i<mid+1; i++)
    { 
        arr1.push_back(arr[i]); 
    }
    vector<Int> arr2; 
    for (int i=mid+1; i<end+1; i++)
    { 
        arr2.push_back(arr[i]); 
    }
    int i=0, j=0; 
    arr.clear(); 
    while (i<arr1.size() && j<arr2.size())
    { 
        if (arr1[i]<arr2[j])
        {
            arr.push_back(arr1[i]); 
            i++; 
        }
        else if (arr2[j]<arr1[i])
        { 
            arr.push_back(arr2[j]); 
            j++;  
        }
    }
    while (i<arr1.size())
    { 
        arr.push_back(arr1[i]); 
        i++; 
    }
    while (j<arr2.size())
    { 
        arr.push_back(arr2[j]); 
        j++; 
    }
}