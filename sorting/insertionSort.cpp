#include <iostream> 
#include <vector> 
using std::cout, std::cin , std::vector, std::swap; 

void insertionSort(vector<int>&); 
void insertionSortRecursive(vector<int>&,int); 

int main()
{ 
    vector<int> arr = {13,46,24,52,20,9}; 
    cout<< "Array before sorting : \n"; 
    for (int i : arr)
    { 
        cout<< i << " "; 
    }
    cout<< "\n"; 
    insertionSort(arr); 
    // insertionSortRecursive(arr,0); 
    cout<< "Array after sorting : \n"; 
    for (int i : arr)
    { 
        cout<< i << " "; 
    }
    cout<< "\n"; 
}

void insertionSort(vector<int>& arr)
{ 
    for (int i=1; i<arr.size(); i++)
    { 
        int j=i-1;
        int key=arr[i]; 
        while(j>=0 && key<arr[j])
        { 
            arr[j+1]=arr[j]; 
            j--; 
        }
        arr[j+1]=key; 
    }
}

void insertionSortRecursive(vector<int>& arr, int index)
{ 
    if (index==(int)arr.size())
        return; 
    for (int j=index; j>0; j--)
    { 
        if (arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]); 
    }
    insertionSortRecursive(arr,index+1); 
}