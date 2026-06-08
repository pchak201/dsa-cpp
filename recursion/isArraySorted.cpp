#include <iostream> 
#include <vector> 
using std::cout, std::cin, std::vector; 

bool isSorted(const vector<int>&,int); 

int main()
{ 
    vector<int> arr[]={2,4,6,9,11}; 
    if (isSorted(arr,0)) 
        cout<< "The array is sorted\n"; 
    else 
        cout<< "The array is not sorted" ; 
}

bool isSorted(const vector<int>& arr, int index)
{
    if ((int)arr.size()<=1 || index==(int)arr.size()-1) 
        return true; 
    if (arr[index]>arr[index+1])
        return false; 
    return isSorted(arr,index+1); 
}