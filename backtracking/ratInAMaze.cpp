#include <bits/stdc++.h> 
using namespace std; 

bool isSafe(const vector<vector<int>>& maze,const vector<vector<bool>>& visited, int x, int y, int n); 
void solve(const vector<vector<int>>& maze, int x, int y, vector<vector<bool>>& visited, string& path, vector<string>& ans,int n); 
vector<string> ratInMaze(vector<vector<int>>& maze) ; 

int main()
{ 
    vector<vector<int>> maze = { {1,1},{1,1}}; 
    vector<string> ans = ratInMaze(maze); 
    cout<< "The valid paths are : \n"; 
    for (string s : ans)
    {
        cout<< s << "\n"; 
    }
    cout<<'\n'; 
}

vector<string> ratInMaze(vector<vector<int>>& maze) 
{
    int n = maze.size(); 
    vector<vector<bool>> visited (n,vector<bool> (n,false)); 
    visited[0][0]=true; 
    int x=0, y=0; 
    string path; 
    vector<string> ans; 
    if(maze[0][0] == 0)
        return {};
    if (maze[n-1][n-1] == 0)
        return {};
    solve(maze,x,y,visited,path,ans,n); 
    sort(ans.begin(),ans.end()); 
    return ans; 
}

void solve(const vector<vector<int>>& maze, int x, int y, vector<vector<bool>>& visited, string& path, vector<string>& ans,int n)
{
    if (x==n-1 && y==n-1)
    { 
        ans.push_back(path); 
        return; 
    }
    // down 
    if (isSafe(maze,visited,x+1,y,n))
    { 
        visited[x][y]=true; 
        path.push_back('D'); 
        solve(maze,x+1,y,visited,path,ans,n); 
        path.pop_back(); 
        visited[x][y]=false; 
    }
    // up 
    if (isSafe(maze,visited,x-1,y,n))
    {
        visited[x][y]=true; 
        path.push_back('U'); 
        solve(maze,x-1,y,visited,path,ans,n); 
        path.pop_back(); 
        visited[x][y]=false; 
    }
    // right
    if (isSafe(maze,visited,x,y+1,n))
    { 
        visited[x][y]=true; 
        path.push_back('R'); 
        solve(maze,x,y+1,visited,path,ans,n); 
        path.pop_back(); 
        visited[x][y]=false; 
    }
    // left
    if (isSafe(maze,visited,x,y-1,n))
    { 
        visited[x][y]=true; 
        path.push_back('L'); 
        solve(maze,x,y-1,visited,path,ans,n); 
        path.pop_back(); 
        visited[x][y]=false; 
    }
}

bool isSafe(const vector<vector<int>>& maze,const vector<vector<bool>>& visited, int x, int y, int n)
{
    if ((x>=0 && x<n) && (y>=0 && y<n) && (visited[x][y]==false) && (maze[x][y]==1))
    { 
        return true; 
    }
    return false; 
}