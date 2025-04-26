int numIdenticalPairs(int* nums, int numsSize) {
    int c=0;
    int n=numsSize;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(nums[i]==nums[j]   && i<j)
            {
                c++;
            }
        }
    }
    return c;
}