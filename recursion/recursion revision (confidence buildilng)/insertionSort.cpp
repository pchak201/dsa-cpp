#include <bits/stdc++.h>
using namespace std; 

void insertionSort(vector<int>& arr,int index=1); 

int main()
{ 
    vector<int> arr = {1,5,5,1,6,2,4,3,9,8,10}; 
    cout<< "Before sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
    insertionSort(arr); 
    cout<< "After sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
}

void insertionSort(vector<int>& arr,int index)
{
    if (index==(int)arr.size())
        return; 
    int elem = arr[index]; 
    int i; 
    for (i=index;i>0; i--) 
    { 
        if (elem<arr[i-1])
            arr[i]=arr[i-1]; 
        else 
            break; 
    }
    arr[i]=elem; 
    insertionSort(arr,index+1); 
}