int removeDuplicates(int* nums, int numsSize) {
    int n=numsSize;
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(nums[i]!=nums[j])
        {
            j++;
            nums[j]=nums[i];
        }
    }
    return j+1;
}