#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long solve(vector<int>& bt) 
    {
      sort(bt.begin(),bt.end());
      long long waiting_time=0;
      long long total_waiting_time = 0;
      for (int i=1; i<bt.size(); i++)
      {
        waiting_time = waiting_time + bt[i-1]; 
        total_waiting_time +=waiting_time;
      }
      return total_waiting_time/bt.size();
    }
};