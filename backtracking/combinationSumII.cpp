#include <bits/stdc++.h>
using std::cout, std::cin, std::vector; 

vector<vector<int>> combinationSum2(vector<int>& arr, int target); 
void solve(const vector<int>& arr, int target, int index, vector<int>& output, vector<vector<int>>& ans); 

int main()
{ 
    vector<int> nums = {2,5,6,9}; 
    int target; 
    cout<< "Enter the target : "; 
    cin>> target; 
    vector<vector<int>> combinations = combinationSum2(nums,target); 
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

vector<vector<int>> combinationSum2(vector<int>& arr, int target)
{ 
    vector<vector<int>> ans; 
    vector<int> output; 
    int index=0; 
    sort(arr.begin(),arr.end()); 
    solve(arr,target,index,output,ans); 
    return ans; 
}

void solve(const vector<int>& arr, int target, int index, vector<int>& output, vector<vector<int>>& ans)
{ 
    if (index==(int)arr.size() || target <=0)
    { 
        if (target==0)
            ans.push_back(output); 
        return; 
    }
    for (int i=index; i<arr.size(); i++)
    { 
        if (i>index && arr[i]==arr[index])
            continue; 
        output.push_back(arr[i]); 
        solve(arr,target-arr[i],index+1,output,ans); 
        output.pop_back(); 
    }
}