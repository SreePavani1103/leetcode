int arraySign(int* nums, int numsSize) {
    int n=numsSize;
    int p=1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        return 0;
        else if(nums[i]<0)
        {
            p*=-1;
        }
    }
    return p;
}