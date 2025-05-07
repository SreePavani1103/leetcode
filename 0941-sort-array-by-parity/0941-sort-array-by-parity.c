/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    *returnSize=n;
    int *ans=(int*)malloc(n*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]%2==0)
        {
            ans[j++]=nums[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(nums[i]%2!=0)
        {
            ans[j++]=nums[i];
        }
    }
    return ans;
}