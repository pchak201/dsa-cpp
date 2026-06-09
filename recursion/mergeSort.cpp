#include <iostream> 
#include <vector> 
#include <algorithm> 
using std::cout, std::cin, std::vector,std::sort; 

void mergeSort(vector<int>& arr,int start,int end); 
void merge(vector<int>& arr, int start, int mid, int end); 

int main()
{ 
    vector<int> arr = {2,5,1,6,1,5,7,17,1,5,6,2,0,5}; 
    cout<< "The unsorted array is : \n"; 
    for (int i=0; i<arr.size(); i++)
    { 
        cout<< arr[i] << " "; 
    }
    cout<< "\n"; 
    mergeSort(arr,0,(int)arr.size()-1); 
    cout<< "The sorted array now is : \n"; 
    for (int i=0; i<arr.size(); i++)
    { 
        cout<< arr[i] << " "; 
    }
    cout<< "\n"; 
}


void mergeSort(vector<int>& arr,int start,int end)
{
    if (start>=end)
        return; 
    int mid=start+(end-start)/2; 
    mergeSort(arr,start,mid); 
    mergeSort(arr,mid+1,end); 
    merge(arr,start,mid,end); 
}

void merge(vector<int>& arr, int start, int mid, int end)
{
    int p1=start, p2=mid+1; 
    vector<int> ans; 
    while(p1<mid+1 && p2<end+1)
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
    while (p1<=mid)
    { 
        ans.push_back(arr[p1]); 
        p1++; 
    }
    while (p2<=end)
    {
        ans.push_back(arr[p2]); 
        p2++; 
    }
    int j=0; 
    for (int i=start; i<=end; i++)
    { 
        arr[i]=ans[j]; 
        j++; 
    }
}