#include <bits/stdc++.h>

using namespace std; 

int lastOccurrence(const vector<int>& arr,int key,int index); 

int main()
{ 
    vector<int> arr = {1,2,3,4,6,6}; 
    cout<< "at index : " << lastOccurrence(arr,1,arr.size()-1); 
}

int lastOccurrence(const vector<int>& arr,int key,int index)
{
    if (index < 0)
        return -1; 
    if (arr[index]==key)
        return index; 
    return lastOccurrence(arr,key,index-1); 
}

int lastOccurrence(const vector<int>& arr,int key,int index)
{
    if (index==arr.size()) 
        return -1; 
    int answer=lastOccurrence(arr,key,index+1); 
    if (answer==-1)
        return answer;
    if (arr[index]==key)
        return index; 
    return -1; 
}