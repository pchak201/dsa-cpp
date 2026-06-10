#include <iostream> 
#include <vector> 
using std::cout, std::cin, std::vector, std::swap; 

void bubbleSort(vector<int>&); 
int main()
{ 
    vector<int> arr= {5,2,1,5,6,6,7,2,6,9,0}; 
    cout<< "The array before sorting : \n"; 
    for (int i: arr)
    { 
        cout<< i << " "; 
    }
    cout<< '\n'; 
    bubbleSort(arr); 
    cout<< "The array after sorting : \n"; 
    for (int i: arr)
    { 
        cout<< i << " "; 
    }
    cout<< '\n'; 
}

void bubbleSort(vector<int>& arr)
{ 
    for (int i=0;i<arr.size()-1; i++)
    { 
        for (int j=1; j<arr.size()-i; j++)
        { 
            if (arr[j-1]>arr[j])
                swap(arr[j-1],arr[j]); 
        }
    }
}