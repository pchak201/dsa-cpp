#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool same(const vector<int>& combination, const vector<vector<int>>& ans)
    { 
        for (auto arr : ans)
        { 
            if (arr.size()!=combination.size())
                continue;

            bool flag=true;
            for (int i =0; i<arr.size(); i++)
            { 
                if (arr[i]!=combination[i])
                { 
                    flag=false;
                    break;
                }
            }

            if (flag==true)
                return true;
        }
        return false;
    }

    void solve(const vector<int>& candidates, int index, int target,
               vector<int>& combination,
               vector<vector<int>>& ans) {
        if (target == 0) {
            if (!same(combination,ans))
                ans.push_back(combination);
            return;
        } else if (index == candidates.size())
            return;
        // include
        if (target >= candidates[index]) {
            combination.push_back(candidates[index]);
            solve(candidates, index + 1, target - candidates[index],
                  combination, ans);
            combination.pop_back();
        }
        // exclude
        solve(candidates, index + 1, target, combination, ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        int index=0;
        solve(candidates, index, target, combination, ans);
        return ans;
    }
};