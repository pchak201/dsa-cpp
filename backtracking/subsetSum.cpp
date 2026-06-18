#include <bits/stdc++.h>
using namespace std; 

vector<int> subsetSums(vector<int>& nums); 
void solve(const vector<int>& nums, int index, int sum,vector<int>& ans); 

int main()
{ 

}

vector<int> subsetSums(vector<int>& nums) 
{
    vector<int> ans; 
    int sum=0; 
    int index=0; 
    solve(nums,index,sum,ans); 
    return ans; 
}

void solve(const vector<int>& nums, int index, int sum,vector<int>& ans)
{ 
    if (index==(int)nums.size())
    { 
        ans.push_back(sum); 
        return; 
    }
    // case 1 : include 
    sum+=nums[index]; 
    solve(nums,index+1,sum,ans); 
    sum-=nums[index]; 
    // case 2 : exclude 
    solve(nums,index+1,sum,ans); 
}
