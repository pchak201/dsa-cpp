#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size(); 
        unordered_map<int,int> mp;
        for (int elem : nums)
            mp[elem]++;
        for (int elem : nums)
            if (mp[elem]>n/2)
                return elem;
        return -1;
    }
};

//Boyer-Moore's voting algorithm
//this algorithm only works if the question guarantees that there IS a majority element - which leetcode 169 does guarantee
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int elem;
        int advantage=0;
        for (int i=0; i<nums.size(); i++)
        { 
            if (advantage==0)
                elem=nums[i];
            if (nums[i]==elem)
                advantage++;
            else
                advantage--;
        }
        return elem;
    }
};