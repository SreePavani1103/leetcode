/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    *returnSize=n;
    int *ans=(int *)malloc(n*sizeof(int));
    int j=0;
    int k=1;
    for(int i=0;i<n;i++)
    {
            if(nums[i]>0)
            {
                ans[j]=nums[i];
                j+=2;
            }
       else 
       {
                ans[k]=nums[i];
              k+=2;
       }
    }
    return ans;
}