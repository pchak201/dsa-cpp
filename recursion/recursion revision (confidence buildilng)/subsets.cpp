#include <bits/stdc++.h>
using namespace std; 

vector<vector<int>> subsets(vector<int>& arr); 
void solve(vector<int>& arr,vector<int>& output, int index,vector<vector<int>>& ans); 

int main()
{ 
    vector<int> arr = {1,2,3}; 
    cout<<"The subsets are : \n"; 
    auto ans = subsets(arr); 
    for (vector<int> arr : ans)
    { 
        for (int i : arr)
        { 
            cout<< i << " "; 
        }
        cout<< "\n"; 
    }
    cout<< "\n"; 
}

vector<vector<int>> subsets(vector<int>& arr)
{
    vector<vector<int>> ans; 
    vector<int> output; 
    int index=0; 
    solve(arr,output,index,ans); 
    return ans; 
}

void solve(vector<int>& arr,vector<int>& output, int index,vector<vector<int>>& ans)
{
    if (index==arr.size()) 
    {   
        ans.push_back(output); 
        output.pop_back(); 
        return ; 
    }
    // include
    output.push_back(arr[index]); 
    solve(arr,output,index+1,ans); 
    // exclude
    solve(arr,output,index+1,ans); 
}