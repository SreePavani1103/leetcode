class Solution {
    void dfs(int i,int j,vector<vector<char>>&grid,int m,int n)
    {
        if(i<0 ||i>=m ||j<0 ||j>=n ||grid[i][j]=='0')
        return;
           grid[i][j]='0';
        dfs(i-1,j,grid,m,n);
        dfs(i,j-1,grid,m,n);
        dfs(i+1,j,grid,m,n);
        dfs(i,j+1,grid,m,n);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
       int m=grid.size();
       int n=grid[0].size();
       int c=0;
       for(int i=0;i<m;i++)
       {
      for(int j=0;j<n;j++)
      {
        if(grid[i][j]=='1')
        {
            dfs(i,j,grid,m,n);
            c++;
        }
        }
       } 
       return c;
    }
};