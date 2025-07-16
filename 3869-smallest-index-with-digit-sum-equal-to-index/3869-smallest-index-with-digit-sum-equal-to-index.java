class Solution {
    public int smallestIndex(int[] nums) {
        int n=nums.length;
        int index;
        for(int i=0;i<n;i++)
        {    
          int l=nums[i];
          int sum=0;
          while(l>0)
          {
              sum+=l%10;
              l=l/10;
          }
          if(sum==i)
          {
         return i;
          } 
        }
        return -1;

    }
}