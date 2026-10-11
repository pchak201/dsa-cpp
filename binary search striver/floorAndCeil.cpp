#include <bits/stdc++.h>
using std::vector;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) 
    {
        int low=0,high=nums.size()-1;
        int floor=-1, ceil=-1;
        while (low<=high)
        { 
            int mid=low+(high-low)/2;
            if (nums[mid]<=x)
            { 
                floor=nums[mid];
                low=mid+1;
            }
            else
                high=mid-1;
        }
        low=0,high=nums.size()-1;
        while (low<=high)
        { 
            int mid=low+(high-low)/2;
            if (nums[mid]>=x)
            { 
                ceil=nums[mid];
                high=mid-1;
            }
            else   
                low=mid+1;
        }
        return {floor,ceil};
    }
};