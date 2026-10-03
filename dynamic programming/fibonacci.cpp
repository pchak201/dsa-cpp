#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*top down approach
    int fib(int n)
    { 
        if (n<=0)
            return n;
        vector<int> dp (n+1,-1);
        dp[0]=0;
        dp[1]=1;
        return helper(n,dp);
    }
    int helper(int n, vector<int>& dp) 
    {
        if (dp[n]!=-1)
            return dp[n];
        else
        { 
            dp[n]=helper(n-1,dp)+helper(n-2,dp);
            return dp[n];
        }
    } 
    */  
    /* bottom up approach
   int fib(int n)
   { 
        if (n<=1)
            return n;
        vector<int> dp (n+1);
        dp[0]=0; 
        dp[1]=1;
        for (int i=2; i<=n; i++)
        { 
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
   }
   */

    // optimized bottom up
    int fib(int n)
    { 
        if (n<=1)
            return n;
        int a=0, b=1;
        int temp;
        for (int i=2; i<=n; i++)
        { 
            temp=a+b;
            a=b;
            b=temp;
        }
        return b;
    }
}; 