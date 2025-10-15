class Solution {
public:
bool isSafe(int row,int col,vector<string>&a,int n)
{
    int i=row;
    int j=col;
    //top columnc
    while(i>=0)
    {
        if(a[i][j]=='Q')
        return false;
        i--;
    }
// top left diag
 i=row;
 j=col;
 while(i>=0 && j>=0)
 {
    if(a[i][j]=='Q')
    return false;
    i--;
    j--;
 }
 i=row;
 j=col;
 while(i>=0 && j<n)
 {
    if(a[i][j]=='Q')
    return false;
    i--;
    j++;
 }
 return true;
}

void solve(int row, vector<vector<string>>&ds,vector<string>&A,int n)
{
    if(row==n)
    {
        ds.push_back(A);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(isSafe(row, i, A,n))
        {
            A[row][i]='Q';
            solve(row+1,ds,A,n);
            A[row][i]='.';
        }
    }
}
    int totalNQueens(int n) {
         vector<vector<string>>ds;
        vector<string>A(n,string(n,'.'));
        solve(0,ds,A,n);
        return ds.size();
    }
};