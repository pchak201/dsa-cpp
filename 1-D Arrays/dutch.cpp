#include <bits/sdtc++.h>
using namespace std;

// taking mid as the working variable
public:
{
    void sortColors(vector<int>& nums) 
    {
        int n=nums.size();
        int low=0, mid=0 , high=n-1;
        while (mid<=high)
        { 
            if (nums[mid]==0)
            { 
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid]==1)
            {
                mid++;
            }
            else
            { 
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};

// taking high as the working variable
class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int n=nums.size();
        int low=0, mid=0 , high=n-1;
        while (mid<=high)
        {
            if (nums[high]==2)
            {
                high--;
            }
            else if (nums[high]==1)
            { 
                swap(nums[high],nums[mid]);
                mid++;
            }
            else
            { 
                swap(nums[high],nums[low]);
                low++;
                if (mid<low)
                    mid=low;
            }
        }
    }
};