#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double fractionalKnapsack(vector<long long>& val, vector<long long>& wt, long long capacity) 
    {
        int n=val.size();
        vector<double> pwratio;
        for (int i=0; i<n ; i++)
            pwratio.push_back((double)val[i]/wt[i]);
        // arrange val, wt and pwratio based on decreasing order of pwratio       
        for (int i=0;i<n-1; i++)
        { 
            for (int j=0; j<n-i-1; j++)
            { 
                if (pwratio[j]<pwratio[j+1])
                { 
                    swap(pwratio[j],pwratio[j+1]);
                    swap(val[j],val[j+1]);
                    swap(wt[j],wt[j+1]);
                }
            }
        }
        long long remaining = capacity;
        double profit=0;
        int i;
        for (i=0 ; i<n ; i++)
        { 
            // remaining space is greater than that of the current element
            if (remaining>=wt[i])
            { 
                remaining-=wt[i];
                profit+=val[i];
                continue;
            }
            break;
        }
        if (i<n && remaining>0)
        { 
            profit+=((double)val[i]/wt[i])*remaining;
            remaining=0;
        }
        return profit;
    }
}; 