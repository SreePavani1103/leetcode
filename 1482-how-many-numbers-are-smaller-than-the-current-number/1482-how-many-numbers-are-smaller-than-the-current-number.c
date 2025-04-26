/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *ans=(int *)malloc(numsSize*sizeof(int));
    if(ans==NULL)
    return NULL;
    int count=0;
   for(int i=0;i<numsSize;i++)
   {
        count=0;
       for(int j=0;j<numsSize;j++)
       {
        if(j!=i&& nums[j]<nums[i])
        {
            count++;  
        }
       }
       ans[i]=count;
   } 
   return ans;
}