#include <bits/stdc++.h>
using namespace std; 

void quickSort(vector<int>& arr,int low, int high); 
int Lomutopartition(vector<int>& arr, int low, int high); 

int main()
{ 
    vector<int> arr = {5,1,5,1,6,2,4,3,9,8,10,2}; 
    cout<< "Before sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
    quickSort(arr,0,arr.size()-1); 
    cout<< "After sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
}

void quickSort(vector<int>& arr,int low, int high)
{
    if (low>=high)
        return ; 
    int pivot_index=Lomutopartition(arr,low,high);
    quickSort(arr,low,pivot_index-1); 
    quickSort(arr,pivot_index+1,high);
}

int Lomutopartition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high]; 
    int smaller=low, larger=low; 
    int index; 
    while (smaller<high && larger<high)
    { 
        if (arr[smaller]<=pivot && arr[larger]>pivot)
        { 
            swap(arr[smaller],arr[larger]); 
            smaller++; 
            larger++;  
            index=smaller; 
        }
        else if (arr[smaller]<=pivot)
            smaller++; 
    }
    return index; 
}