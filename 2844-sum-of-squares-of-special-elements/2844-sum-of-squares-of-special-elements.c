int sumOfSquares(int* nums, int numsSize) {
    int n=numsSize;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            int val=nums[i-1];
            sum+=val*val;
        }
    }
    return sum;
}