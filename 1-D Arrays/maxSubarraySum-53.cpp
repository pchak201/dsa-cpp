#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int maxSum=INT_MIN;
        int n=nums.size();
        for (int i=0; i<n ; i++)     
        { 
            int sum=0;
            for (int j=i; j<n ;j++)
            { 
                sum+=nums[j];
                maxSum=max(maxSum,sum);
            }
        }
        return maxSum;
    }
};

// Kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int maxSum=INT_MIN;
        int sum=0;
        for (int i=0; i<n;i++)
        { 
            sum+=nums[i];
            maxSum=max(maxSum,sum);
            if (sum<0)
                sum=0;
        }
        return maxSum;
    }
};

// using Kadane's algo to find the array elements which have the largest sum
class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int maxSum=INT_MIN;
        int sum=0;
        int startIndex=-1,endIndex=-1;
        for (int i=0; i<n;i++)
        { 
            if (sum==0)
                startIndex=i;
            sum+=nums[i];
            if (sum>maxSum)
            { 
                maxSum=sum;
                endIndex=i;
            }
            if (sum<0)
                sum=0;
        }
        vector<int> ans;
        for(int i=startIndex; i<=endIndex; i++)
            ans.push_back(nums[i]);
        return ans;
    }
};