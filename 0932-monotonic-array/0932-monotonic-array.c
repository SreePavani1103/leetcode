bool isMonotonic(int* nums, int numsSize) {
    int n=numsSize;
    int k=1,l=1;
    for(int i=1;i<n;i++)
    {
        if(nums[i]<nums[i-1])
        k=0;
        if(nums[i]>nums[i-1])
        l=0;
       }
    return k||l;
}