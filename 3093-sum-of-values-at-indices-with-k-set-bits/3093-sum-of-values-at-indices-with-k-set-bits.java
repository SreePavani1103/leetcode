class Solution {
    public int sumIndicesWithKSetBits(List<Integer> nums, int k) {
       int n=nums.size();
       String[] ans=new String[n];
       for(int i=0;i<n;i++)
       {
           ans[i]=Integer.toBinaryString(i);
       }
       int sum=0;
       for(int i=0;i<n;i++)
       {
        int c=0;
        for(int j=0;j<ans[i].length();j++)
         {
            if(ans[i].charAt(j)=='1')
            c++;
         }
        if(c==k)
        sum+=nums.get(i);
       }
       return sum;
    }
}