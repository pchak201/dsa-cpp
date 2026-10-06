#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int max_index=0;
        int n = nums.size();
        for (int i=0;i<n; i++) 
        { 
            if (i>max_index)
                return false;
            int target=i+nums[i];
            max_index=max(target,max_index);
        }
        return true;
    }
}; 