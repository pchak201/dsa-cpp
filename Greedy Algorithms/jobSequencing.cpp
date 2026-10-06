#include <bits/stdc++.h> 
using namespace std; 

class Solution{  
  public:  
    vector<int> JobScheduling(vector<vector<int>>& Jobs) 
    { 

        int n= Jobs.size();
        sort(Jobs.begin(), Jobs.end(), [](const vector<int>& a, const vector<int>& b) 
        {
            return a[2] > b[2];
        });

        vector<int> used(Jobs.size(), -1);
        int total_profit=0;
        int count=0;
        for (int i=0; i<n; i++)
        { 
            int p_id=Jobs[i][0];
            int deadline=Jobs[i][1];
            int profit=Jobs[i][2];
            for (int j=deadline; j>0 ;j--)
            { 
                if (used[j]==-1)
                { 
                    used[j]=p_id;
                    count++;
                    total_profit+=profit;
                    break;
                }
            }
        }
        return {count,total_profit};
    } 
};