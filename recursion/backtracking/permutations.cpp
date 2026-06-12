#include <bits/stdc++.h>
using std::cout, std::cin, std::vector; 

vector<vector<int>> permute(vector<int>& nums) ; 
bool IsDuplicate(const vector<int> &nums); 
void solve(const vector<int>& nums, int index, vector<int>& output, vector<vector<int>>& ans); 

int main()
{ 
    vector<int> nums= {1,2,3}; 
    vector<vector<int>> ans=permute(nums); 
    cout<< "All the permutations are : \n"; 
    for (vector<int> arr : ans)
    { 
        for (int elem : arr)
        { 
            cout<< elem << " "; 
        }
        cout<< "\n"; 
    }
    cout<< "\n"; 
}

vector<vector<int>> permute(vector<int>& nums) 
{
    vector<vector<int>> ans; 
    vector<int> output; 
    int index=0; 
    solve(nums,index,output,ans); 
    return ans; 
}

void solve(const vector<int>& nums, int index, vector<int>& output, vector<vector<int>>& ans)
{ 
    if (index==nums.size())
    { 
        if (!IsDuplicate(output))
            ans.push_back(output); 
        return; 
    }
    int j=0; 
    for (int i=0; i<nums.size(); i++)
    { 
        output.push_back(nums[i]); 
        solve(nums,index+1,output,ans); 
        output.pop_back(); 
    }
}

bool IsDuplicate(const vector<int> &nums)
{ 
    for (int i=0; i<nums.size(); i++)
    { 
        for (int j=i+1; j<nums.size(); j++)
        { 
            if (nums[j]==nums[i])
                return true; 
        }
    }
    return false; 
}