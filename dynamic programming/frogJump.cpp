#include <bits/stdc++.h> 
using std::vector;

int frogJump(int n, vector<int> &heights)
{
    if (n<=1)
        return 0;
    int a = 0;
    int b= std::abs(heights[1]-heights[0]);

    for (int i=2; i<heights.size(); i++)
    { 
        int oneJump = b + std::abs(heights[i]-heights[i-1]);
        int twoJump = a + std::abs(heights[i]-heights[i-2]);
        a = b;
        b = std::min(oneJump, twoJump);
    }
    return b;
}