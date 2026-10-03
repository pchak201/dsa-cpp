#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) 
    {
        vector<int> prefixSum(arr.size(),0);
        prefixSum[0]=arr[0];
        for (int i=0;i<arr.size(); i++)
            prefixSum[i]=prefixSum[i-1]=arr[i];
    }
};