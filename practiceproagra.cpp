#include <iostream> 
#include <vector> 
#include <algorithm>
using std::vector,std::string;

vector<vector<int>> nQueens(int n)
{
    vector<vector<int>> board (n, vector<int> (n,0));
    vector<vector<int>> ans;
    solve(0,ans,board)
}
