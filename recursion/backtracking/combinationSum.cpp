#include <bits/stdc++.h>
using std::cout, std::cin, std::vector; 

vector<vector<int>> combinationSum(vector<int>& nums, int target); 
void solve(const vector<int>& nums,int index, int target, vector<int>& output, vector<vector<int>>& ans); 

int main()
{ 
    vector<int> nums = {2,5,6,9}; 
    int target; 
    cout<< "Enter the target : "; 
    cin>> target; 
    vector<vector<int>> combinations = combinationSum(nums,target); 
    for (vector<int> arr : combinations)
    { 
        for (int elem : arr)
        { 
            cout<< elem << " "; 
        }
        cout<< "\n"; 
    }
    cout<< '\n'; 
}

vector<vector<int>> combinationSum(vector<int>& nums, int target) 
{
    vector<vector<int>> ans; 
    vector<int> output; 
    int index=0; 
    solve(nums,index,target,output,ans); 
    return ans; 
}

void solve(const vector<int>& nums,int index, int target, vector<int>& output, vector<vector<int>>& ans)
{
    if (index==(int)nums.size() || target<=0)    
    { 
        if (target==0)
            ans.push_back(output); 
        return ; 
    }
    // case 1 : include it 
    output.push_back(nums[index]); 
    target-=nums[index]; 
    solve(nums,index,target,output,ans); 
    output.pop_back(); 
    // case 2 : exclude it
    solve(nums,index+1,target,output,ans); 
}
