#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseVector(vector<int>& nums, int start, int end)
    { 
        while (start<end)
        { 
            swap (nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) 
    { 
        int n= nums.size();
        k%=n;
        reverseVector(nums,0,n-k-1);
        reverseVector(nums,n-k,n-1);
        reverseVector(nums,0,n-1);
    }
}; 