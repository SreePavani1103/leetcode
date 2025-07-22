/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int n=numsSize;
    int *dc=(int *)malloc(2*sizeof(int));
     dc[0]=-1;
      dc[1]=-1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            if(dc[0]==-1){
            dc[0]=i;
            }
            dc[1]=i;
        }
        *returnSize=2;
    }
   return dc;
} 