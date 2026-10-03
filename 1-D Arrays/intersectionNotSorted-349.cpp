#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isInVector(int element, const vector<int>& arr)
    { 
        for (int x : arr)
        { 
            if (x == element)
                return true;
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        for (int i = 0 ; i<n1 ; i++)
        { 
            for (int j=0 ; j<n2 ; j++)
            { 
                if (nums1[i]==nums2[j] && !isInVector(nums1[i],ans))
                    ans.push_back(nums1[i]);
            }
        }
        return ans;
    }
};