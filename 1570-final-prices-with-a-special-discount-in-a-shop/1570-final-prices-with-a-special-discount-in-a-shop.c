/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int n=pricesSize;
    *returnSize=n;
    int *ans=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        ans[i]=prices[i];
        for(int j=i+1;j<n;j++)
        {
            if(prices[j]<=prices[i])
            {
                ans[i]-=prices[j];
                break;
            }
        }
    }
    return ans;
}