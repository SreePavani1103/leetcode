int removeElement(int* nums, int numsSize, int val) {
    int n=numsSize;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]!=val)
        nums[j++]=nums[i];
    }
    return j;
}