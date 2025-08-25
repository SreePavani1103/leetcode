class Solution {
    int digit(int a)
    {
        int sum=0;
        while(a!=0)
        {
            sum+=a%10;
            a=a/10;
        }
        return sum;
    }
    public int minElement(int[] nums) {
        for(int i=0;i<nums.length;i++)
        {
            nums[i]=digit(nums[i]);
        }
        int k=nums[0];
        for(int i=0;i<nums.length;i++)
        {
            k=Math.min(k,nums[i]);
        }
        return k;
    }
}