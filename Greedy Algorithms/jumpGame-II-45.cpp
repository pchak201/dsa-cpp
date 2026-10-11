#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int index, int jumps, const vector<int>& nums, vector<int>& dp)
    {

        int ans;
        for (int i=1; i<=nums.size(); i++)
        { 
            if (dp[index+i]!=-1)
                ans=dp[index+i];
            else

                ans=solve(index+1,jumps,nums,dp)
            least_jumps=min(ans,least_jumps);
        }
        return least_jumps;
    }
    int jump(vector<int>& nums) 
    {
        vector<int> dp (nums.size(),-1);
        return solve(0,0,nums,dp);
    }
};