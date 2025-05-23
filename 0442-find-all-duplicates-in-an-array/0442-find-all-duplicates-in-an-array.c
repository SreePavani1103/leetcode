/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
  int *ans=(int *)malloc(100001*sizeof(int));
    int dc[100001]={0};
    int n= numsSize;
    for(int i=0;i<n;i++)
    {
        dc[nums[i]]++;
    }
    int j=0;
    for(int i=0;i<100001;i++)
    {
        if(dc[i]>=2)
        {
           ans[j++]=i;
        }
    }
    *returnSize=j;
    return ans;
}