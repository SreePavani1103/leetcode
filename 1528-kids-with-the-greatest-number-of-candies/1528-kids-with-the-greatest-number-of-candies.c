/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize=candiesSize;
    bool*ans=malloc(candiesSize*(sizeof(bool)));
    int n=candiesSize;
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<candies[i])
        {
            max=candies[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max<=candies[i]+extraCandies)
        ans[i]=true;
        else
        ans[i]=false;
    }
   return ans;
}