#include <bits/stdc++.h>

using namespace std; 

int firstOccurrence(const vector<int>& arr,int key,int index=0); 

int main()
{ 
    vector<int> arr = {1,2,3,4,6,6}; 
    cout<< "at index : " << firstOccurrence(arr,190); 
}

int firstOccurrence(const vector<int>& arr,int key,int index)
{
    if (index==arr.size()) 
        return -1; 
    if (arr[index]==key)
        return index; 
    return firstOccurrence(arr,key,index+1); 
}