class Solution {
public:
int dp[2000][2000];
    int min_sum(vector<vector<int>>&grid,int i,int j)
    {
        int m=grid.size();
        int n=grid[0].size();
       if(i>=m || j>=n)
       return INT_MAX;
       if(i==m-1 && j==n-1)
       return grid[i][j];
       if(dp[i][j]!=-1)
       return dp[i][j];
       return dp[i][j]=grid[i][j]+min(min_sum(grid,i+1,j),min_sum(grid,i,j+1));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        memset(dp,-1,sizeof(dp));
      int ans=min_sum(grid,0,0);
      return ans;
    }
};