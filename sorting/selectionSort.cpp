#include <iostream> 
#include <vector> 
using std::cout, std::cin , std::vector, std::swap; 

void selectionSort(vector<int>&); 
int findMinIndex(const vector<int>&,int); 

int main()
{ 
    vector<int> arr = {13,46,24,52,20,9}; 
    cout<< "Array before sorting : \n"; 
    for (int i : arr)
    { 
        cout<< i << " "; 
    }
    cout<< "\n"; 
    selectionSort(arr); 
    cout<< "Array after sorting : \n"; 
    for (int i : arr)
    { 
        cout<< i << " "; 
    }
    cout<< "\n"; 
}

void selectionSort(vector<int>& arr)
{ 
    int size=(int)arr.size(); 
    for (int i=0; i<size-1; i++)
    {
        int min_index=findMinIndex(arr,i); 
        swap(arr[i],arr[min_index]); 
    }
}

int findMinIndex(const vector<int>& arr,int index)
{ 
    int min=INT_MAX,min_index=0; 
    for (int i=index; i<arr.size(); i++)
    { 
        if (arr[i]<min)
        {
            min=arr[i]; 
            min_index=i; 
        }
    }
    return min_index; 
}