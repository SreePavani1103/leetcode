int maxProduct(int* nums, int numsSize) {
    int maxProduct(int* nums, int numsSize) {  
    int n=numsSize;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
          if(nums[j]<nums[j+1])
          {
            int temp=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
          }

        }
    }
  int  max=(nums[0]-1)*(nums[1]-1);
    return max;

}