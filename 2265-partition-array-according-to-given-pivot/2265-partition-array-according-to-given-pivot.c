/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int n=numsSize;
    *returnSize=n;
    int *ans=(int *)malloc(n*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]<pivot)
        {
            ans[j++]=nums[i];
        }
    }
     for(int i=0;i<n;i++)
    {
        if(nums[i]==pivot)
        {
            ans[j++]=nums[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(nums[i]>pivot)
        ans[j++]=nums[i];
    }
    *returnSize=j;
    return ans;
}