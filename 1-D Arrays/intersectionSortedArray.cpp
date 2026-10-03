#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) 
    {
        int p1=0; 
        int p2=0;
        vector<int> ans;
        while (p1<nums1.size() && p2<nums2.size())     
        { 
            if (nums1[p1]<nums2[p2])
                p1++;
            else if (nums2[p2]<nums1[p1])
                p2++;
            else if (nums1[p1]==nums2[p2])
            { 
                ans.push_back(nums1[p1]);
                p1++; 
                p2++;
            }
        }
        return ans;
    }
};