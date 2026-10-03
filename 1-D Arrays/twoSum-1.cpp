#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        unordered_map<int,int> mp;
        for (int i=0; i<n; i++)
        { 
            int elem1=nums[i];
            int elem2=target-nums[i];
            if (mp.find(elem2)!=mp.end())  // means that the it exists in the map
                return {i,mp[elem2]};
            mp[elem1]=i;
        }
        return {};
    }
};