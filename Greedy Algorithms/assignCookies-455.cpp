#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0, j=0;
        int max=0;
        while (j<s.size() && i<g.size())
        { 
            if (s[j]>=g[i])
            { 
                max++;
                i++; 
                j++;
            }
            else 
                j++;
        }
        return max;
    }
};