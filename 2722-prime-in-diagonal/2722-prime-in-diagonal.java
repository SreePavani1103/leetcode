class Solution {
    static int isprime(int n)
    {
        if(n<2)
        return 0;
        for(int i=2;i<=Math.sqrt(n);i++)
        {
            if(n%i==0)
            return 0;
        }
        return 1;
    }
    public int diagonalPrime(int[][] nums) {
        int max=0;
        for(int i=0;i<nums.length;i++)
        {
            for(int j=0;j<nums[i].length;j++)
            {
                if(i==j || i+j==nums.length-1)
                {
                    if(isprime(nums[i][j])==1)
                    {
                    max=Math.max(max,nums[i][j]);
                    }
                }
            }
        }
             return max;
    }
}