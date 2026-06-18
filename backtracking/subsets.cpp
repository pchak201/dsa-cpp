#include <bits/stdc++.h>
using std::cout, std::cin, std::vector; 


vector<vector<int>> subsets(vector<int>& nums); 
void solve(vector<int>& nums, vector<int> subset, int index, vector<vector<int>>& ans); 


int main()
{ 
    vector<int> arr= {1,2,3}; 
    cout<< "The power set of the given set is : \n" ; 
    vector<vector<int>> ans= subsets(arr); 
    for (vector<int> x : ans)
    { 
        for (int y : x )
        { 
            cout<< y << " "; 
        }
        cout<< "\n"; 
    }
}

vector<vector<int>> subsets(vector<int>& nums) 
{
    vector<vector<int>> ans ;
    vector<int> subset; 
    int index=0; 
    solve(nums,subset, index, ans); 
    return ans; 
}

void solve(vector<int>& nums, vector<int> subset, int index, vector<vector<int>>& ans)
{ 
    if (index>=nums.size())
    { 
        ans.push_back(subset); 
        return;
    }
    // exclude value
    solve(nums,subset,index+1,ans); 
    // include value
    subset.push_back(nums[index]); 
    solve(nums,subset,index+1,ans); 
}