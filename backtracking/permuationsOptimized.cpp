#include <bits/stdc++.h> 
using namespace std; 

vector<vector<int>> permute(vector<int>& nums); 
void solve(vector<int>& nums, int index, vector<vector<int>>& ans); 

int main()
{ 
    vector<int> nums = {1,2,3}; 
    auto ans= permute (nums); 
    cout<< "The valid permutations are : \n"; 
    for (auto arr : nums)
    { 
        for (int i : arr)
        { 
            cout<< i << " "; 
        }
        cout<< "\n"; 
    }
}

vector<vector<int>> permute(vector<int>& nums)
{
    vector<vector<int>> ans; 
    vector<int> output; 
    int index=0; 
    solve(nums,index,output,ans); 
    return ans; 
}

void solve(vector<int>& nums, int index,vector<int>& output, vector<vector<int>>& ans)
{
    if (index==(int)nums.size())
    { 
        ans.push_back(output); 
        return; 
    }
    // here the number of cases is going to be equal to the length of the vector
    for (int i=index; i<nums.size(); i++)
    { 
        swap(nums[i],nums[index]); 
        output.push_back(nums[index]); 
        solve(nums,index+1,ans); 
        output.pop_back(); 
        swap(nums[i],nums[index]); 
    }
}