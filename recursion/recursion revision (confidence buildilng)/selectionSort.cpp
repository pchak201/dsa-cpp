#include <bits/stdc++.h>
using namespace std; 

int findMinIndex(const vector<int>&,int,int min_index,int=INT_MAX); 
void selectionSort(vector<int>& arr,int index=0); 

int main()
{ 
    vector<int> arr = {1,5,5,1,6,2,4,3,9,8,10}; 
    cout<< "Before sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
    selectionSort(arr); 
    cout<< "After sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
}

void selectionSort(vector<int>& arr,int index)
{ 
    if (index==arr.size()-1)
        return; 
    int min_index = findMinIndex(arr,index,index); 
    swap(arr[min_index],arr[index]); 
    selectionSort(arr,index+1); 
}

int findMinIndex(const vector<int>& arr,int index,int min_index,int min)
{ 
    if (index==arr.size())
        return min_index; 
    if (arr[index]<min)
    { 
        min_index=index; 
        min=arr[index]; 
    }
    return findMinIndex(arr,index+1,min_index,min); 
}