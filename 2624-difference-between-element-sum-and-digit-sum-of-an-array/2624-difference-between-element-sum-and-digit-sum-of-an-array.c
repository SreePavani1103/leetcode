int differenceOfSum(int* nums, int numsSize) {
    int elesum=0;
    int digitsum=0;
    for(int i=0;i<numsSize;i++)
    {
        elesum+=nums[i];
        int n=nums[i];
        while(n>0)
        {
            digitsum+=n%10;
            n=n/10;
        }
    }
   
    return abs(elesum-digitsum);
}