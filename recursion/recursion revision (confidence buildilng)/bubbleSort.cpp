#include <bits/stdc++.h>
using namespace std; 

void bubblePass(vector<int>& arr,int i,int j); 
void bubbleSort(vector<int>&,int); 

int main()
{ 
    vector<int> arr = {1,5,5,1,6,2,4,3,9,8,10}; 
    cout<< "Before sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
    bubbleSort(arr,arr.size()); 
    cout<< "After sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
}

void bubbleSort(vector<int>& arr,int index)
{
    if (index<=1) 
        return; 
    bubblePass(arr,index,0); 
    bubbleSort(arr,index-1); 
}

void bubblePass(vector<int>& arr,int i,int j)
{ 
    if (j==i-1)
        return; 
    if (arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]); 
    bubblePass(arr,i,j+1); 
}