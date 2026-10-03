#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) 
    {
        int i = 0; 
        int j = 0;
        int p = 0;
        vector<int> ans;
        while (i<nums1.size() && j<nums2.size())      
        { 
            if (nums1[i]<=nums2[j])
            { 
                if (p>0 && ans[p-1]==nums1[i])
                { 
                    i++;
                    continue;
                }
                ans.push_back(nums1[i]);
                i++;
                p++;
            }
            else 
            { 
                if (p>0 && ans[p-1]==nums2[j])
                { 
                    j++;
                    continue;
                }
                ans.push_back(nums2[j]);
                j++;
                p++;
            }
        }
        while (i<nums1.size())
        { 
            if (p>0 && ans[p-1]==nums1[i])
            {
                i++;
                continue;
            }
            ans.push_back(nums1[i]);
            i++; 
            p++;
        }
        while (j<nums2.size())
        { 
            if (p>0 && ans[p-1]==nums2[j])
            {
                j++;
                continue;
            }
            ans.push_back(nums2[j]);
            j++;
            p++;
        }
        return ans;
    }
};