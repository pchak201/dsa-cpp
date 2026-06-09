#include <iostream> 
#include <vector> 
using std::cout, std::cin, std::vector, std::swap; 


void quickSort(vector<int>&,int,int); 
int findPartition(vector<int>&,int,int); 

int main()
{ 
    vector<int> arr= {4,6,2,5,7,9,1,3}; 
    // vector<int> arr = {4,4,4,4}; 
    cout<< "The array before quicksort : \n"; 
    for (int i=0; i<arr.size(); i++)
    { 
        cout<< arr[i] << " " ;
    }
    cout<< "\n"; 
    cout<< "The array after quicksort : \n"; 
    quickSort(arr,0,arr.size()-1); 
    for (int i=0; i<arr.size(); i++)
    { 
        cout<< arr[i] << " " ;
    }
    cout<< "\n"; 
}

void quickSort(vector<int>& arr, int low, int high)
{ 
    // here we pick the pivot as the first element 
    if (low>=high)
        return;
    int pivot = arr[low]; 
    int partition = findPartition(arr,low,high); 
    quickSort(arr,low,partition-1); 
    quickSort(arr,partition+1,high); 
}

int findPartition(vector<int>& arr, int low, int high)
{ 
    int i=low, j=high, pivot=arr[low]; 
    while (i<=j)
    { 
        while(i<=high && arr[i]<=pivot)
            i++; 
        while(j>=low && arr[j]>pivot)
            j--; 
        if (i<=j)
        { 
            swap(arr[i],arr[j]); 
            i++; 
            j--; 
        }
    }
    swap(arr[j],arr[low]); 
    return j; 
}