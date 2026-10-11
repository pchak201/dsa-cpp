#include <bits/stdc++.h>
using std::vector;

class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) 
    {
        int first=-1,last=-1;
        int low=0,high=arr.size()-1;
        while (low<=high)
        { 
            int mid=low+(high-low)/2;
            if (arr[mid]==target)
            { 
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        low=0,high=arr.size()-1;
        while (low<=high)
        { 
            int mid=low+(high-low)/2;
            if (arr[mid]==target)
            { 
                last=mid;
                low=mid+1;
            }
            else if (arr[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        if (first==-1)
            return 0;
        return last-first+1;
    }
};