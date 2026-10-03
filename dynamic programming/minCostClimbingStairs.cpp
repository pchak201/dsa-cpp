#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        int a = cost[0];
        int b = cost[1];
        for (int i=2; i<n; i++)
        { 
            int temp=b;
            b = cost[i]+std::min(a,b);
            a=temp;
        }
        return std::min(a,b);
    }
};
