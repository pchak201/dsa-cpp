class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        for (int i=0; i<h; i++)
        { 
            if (piles[i]<k)
            { 
                piles[i]==0; 
            }
            else 
            { 
                piles[i]-=k; 
            }
        }
    }
};