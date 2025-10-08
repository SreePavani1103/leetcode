class Solution {
public:
 int dp[501][501];
   int solve(string &a,string &b,int i,int j,int n,int m)
   {
        
        //base case
        if(i==n || j==m)
        {
            return max(n-i,m-j);
        }
        if(dp[i][j]!=-1)
        return dp[i][j];
        if(a[i]==b[j])
        {
            return solve(a,b,i+1,j+1,n,m);
        }
        //add
        int add=1+solve(a,b,i,j+1,n,m);
        //remove
        int remove=1+solve(a,b,i+1,j,n,m);
        //replace
        int replace=1+solve(a,b,i+1,j+1,n,m);
        return dp[i][j]=min(add,min(remove ,replace));
   }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        memset(dp,-1,sizeof(dp));
        int ans=solve(word1,word2,0,0,n,m);
        return ans;
    }
};