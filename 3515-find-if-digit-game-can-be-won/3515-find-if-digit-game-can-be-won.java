class Solution {
    public boolean canAliceWin(int[] nums) {
        int l=nums.length;
        int sum1=0;
        int sum2=0;
        int k=0;
        for(int i=0;i<l;i++)
        {
          if(nums[i]>=1 && nums[i]<=9)
          sum1+=nums[i];
          else
          sum2+=nums[i];
        } 
        if(sum1==sum2)
        return false;
        else
        return true; 
    }
}