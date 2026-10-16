#include <bits/stdc++.h> 
using namespace std; 

void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans)
{ 
    if (index>=nums.size())
    { 
        ans.push_back(output);
        return;
    }
    for (int i=0; i<nums.size(); i++)
    { 
        if (i==index)
            continue;
        output.push_back(nums[i]);
        solve(nums,output,index+1,ans);
        output.pop_back();
    }
}

vector<vector<int>> permute(vector<int>& nums) 
{
    vector<vector<int>> ans; 
    int index=0;
    vector<int> output;
    solve(nums,output,index,ans);
    return ans;
}

