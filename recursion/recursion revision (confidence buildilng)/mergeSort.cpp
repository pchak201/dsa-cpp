#include <bits/stdc++.h>
using namespace std; 

void mergeSort(vector<int>&,int,int); 
void merge(vector<int>&,int,int,int); 

int main()
{ 
    vector<int> arr = {1,5,5,1,6,2,4,3,9,8,10}; 
    cout<< "Before sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
    mergeSort(arr,0,arr.size()-1); 
    cout<< "After sorting :\n"; 
    for (int i: arr)
        cout<< i << " "; 
    cout<< '\n'; 
}
void mergeSort(vector<int>& arr,int low,int high)
{ 
    if (low>=high)
        return; 
    int mid = low + (high-low)/2;
    mergeSort(arr,low,mid); 
    mergeSort(arr,mid+1,high); 
    merge(arr,low,mid,high); 
}

void merge(vector<int>& arr,int low,int mid, int high)
{ 
    int p1=low; 
    int p2=mid+1; 
    vector<int> ans;  
    while (p1<=mid && p2<=high)
    { 
        if (arr[p1]<=arr[p2])
        { 
            ans.push_back(arr[p1]); 
            p1++; 
        }
        else if (arr[p1]>arr[p2])
        { 
            ans.push_back(arr[p2]); 
            p2++; 
        }
    }
    while(p1<=mid)
    { 
        ans.push_back(arr[p1]); 
        p1++; 
    }
    while(p2<=high)
    { 
        ans.push_back(arr[p2]); 
        p2++; 
    }
    int j=0; 
    for (int i=low; i<=high; i++)
    { 
        arr[i]=ans[j]; 
        j++; 
    }
}