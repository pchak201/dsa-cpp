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
    solve(arr,target,index,output,ans); 
    return ans; 
}

void solve(const vector<int>& arr, int target, int index, vector<int>& output, vector<vector<int>>& ans)
{ 
    if (index==(int)arr.size() || target <=0)
    { 
        if (target==0)
        { 
            vector<int> original = output; 
            sort(output.begin(),output.end()); 
            if (notIn(output,ans))
                ans.push_back(original); 
        }
        return; 
    }
    // Case 1 : include 
    output.push_back(arr[index]); 
    solve(arr,target-arr[index],index+1,output,ans); 
    output.pop_back(); 
    // Case 2 : exclude
    solve(arr,target,index+1,output,ans); 
}

bool notIn(const vector<int>& output, const vector<vector<int>>& answer)
{ 
    for (vector<int> i : answer)
    { 
        sort(i.begin(),i.end()); 
        if (i==output)
            return false;  
    }
    return true; 
}