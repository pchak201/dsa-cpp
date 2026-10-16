#include <bits/stdc++.h>
using std::vector;


void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans)
{ 
    if (index>=nums.size())
    {
        ans.push_back(output);
        return; 
    }
    // include
    output.push_back(nums[index]);
    solve(nums,output,index+1,ans);
    output.pop_back();
    // exclude
    solve(nums,output,index+1,ans);
}

vector<vector<int>> subsets(vector<int>& nums)
{ 
    vector<vector<int>> ans;
    vector<int> output;
    int index =0;
    solve(nums,output,index,ans);
    return ans;
}

int main()
{ 
    vector<int> nums = {1,2,3,};
    std::cout << "The subsets are : \n";
    vector<vector<int>> ans = subsets(nums);
    for (vector<int> arr : ans)
    { 
        for (int i : arr)
            std::cout<< i << " "; 
        std::cout<< "\n"; 
    } 
}