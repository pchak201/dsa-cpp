#include <bits/stdc++.h>
using namespace std;

// iterative implementation
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int low=0, high=nums.size()-1;
        while (low<=high)
        { 
            int mid=high-((high-low)/2);
            if (nums[mid]==target)
                return mid;
            else if (nums[mid]<target)
                low=mid+1;
            else 
                high=mid-1;
        }
        return -1;
    }
};

// recursive implementation
class Solution {
public:
    int search(vector<int>& nums,int low, int high, int target) 
    {
        if (low>high)
            return -1;
        int mid=high-((high-low)/2);
        if (nums[mid]==target)
            return mid;
        else if (nums[mid]<target)
            low=mid+1;
        else 
            high=mid-1;
        return search(nums,low,high,target); 
    }
};
