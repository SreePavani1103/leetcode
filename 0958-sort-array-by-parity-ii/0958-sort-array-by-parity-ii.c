/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    *returnSize=n;
   int *a=(int*)malloc(n*sizeof(int));
   int e=0;
   int o=1;
   for(int i=0;i<n;i++)
   {
        if(nums[i]%2==0)
        {
            a[e]=nums[i];
            e+=2;
        }
       else
        {
            a[o]=nums[i];
            o+=2;
        }
   }
   return a;
}