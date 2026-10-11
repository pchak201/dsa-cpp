#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int upperBound(vector<int> &nums, int x)
    {
        int upper_bound=nums.size();  
        int low=0,high=nums.size()-1;
        while (low<=high)
        { 
            int mid=low+(high-low)/2;
            if (nums[mid]>x)
            { 
                upper_bound=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return upper_bound;
    }
};