#include <bits/stdc++.h>
using std::vector;

vector<int> findOceanViewBuildings(vector<int>& heights)
{ 
    vector<int> buildingIndex;
    int max=INT_MIN;
    for (int i=heights.size()-1; i>=0; i--)
    {
        if (heights[i]>max)
        { 
            max=heights[i];
            buildingIndex.push_back(i);
        }
    }
    std::reverse(buildingIndex.begin(), buildingIndex.end());
    return buildingIndex;
}
