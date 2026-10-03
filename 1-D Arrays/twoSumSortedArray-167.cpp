#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int n=numbers.size();
        int i=0, j=n;
        while (i<j)
        { 
            int sum=numbers[i]+numbers[j];
            if (sum==target)
                return {i+1,j+1};
            else if (sum>target)
                j--;
            else 
                i++;
        }
        return {};
    }
};