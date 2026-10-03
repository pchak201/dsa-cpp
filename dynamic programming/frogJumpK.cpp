#include <bits/stdc++.h> 
using std::vector;

// memoized approach
int helper(int current, int k, vector<int>& heights, vector<int>& dp)
{ 
    if (dp[current]!=-1)
        return dp[current];
    int minJumpValue=INT_MAX; 
    for (int i=1; i<=k; i++)
    { 
        if (current-i<0)
            continue;
        int jump = helper(current-i,k,heights,dp) + std::abs(heights[current]-heights[current-i]);
        minJumpValue= std::min(jump,minJumpValue);
    }
    dp[current]=minJumpValue;
    return dp[current];
}

int frogJump(int n, int k ,vector<int> &heights)
{
    if (n<=1)
        return 0;
    vector<int> dp (heights.size(),-1);
    dp[0]=0;
    return helper(heights.size()-1, k, heights, dp);
} 


// tabular approach 
int frogJump(int n, int k ,vector<int> &heights)
{
    if (n<=1)
        return 0;
    vector<int> dp(heights.size());
    dp[0]=0;
    for (int i=1; i<heights.size(); i++)
    {
        int minVal = INT_MAX;
        for (int j=1; j<=k; j++)
        { 
            if (i-j < 0)
                continue;
            int jump = dp[i-j] + std::abs(heights[i]-heights[i-j]);
            minVal=std::min(jump,minVal);
        }
        dp[i]=minVal;
    }
    return dp[heights.size()-1];
} 

// tabular space optimized
int frogJump(int n, int k ,vector<int> &heights)
{
    if (n<=1)
        return 0;
    vector<int> dp(heights.size());
    int a =0;
    int b = heights[1]-heights[0];
    for (int i=1; i<heights.size(); i++)
    {
        int minVal = INT_MAX;
        for (int j=1; j<=k; j++)
        { 
            if (i-j < 0)
                continue;
            int jump = b + std::abs(heights[i]-heights[i-j]);
            minVal=std::min(jump,minVal);
        }
        dp[i]=minVal;
    }
    return dp[heights.size()-1];
} 