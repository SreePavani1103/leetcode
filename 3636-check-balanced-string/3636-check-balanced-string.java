class Solution {
    public boolean isBalanced(String num) {
        int n=num.length();
        int [] ans=new int [n];
        int j=0;
       for(int i=0;i<n;i++)
       {
            ans[j++]=num.charAt(i)-'0';
       }
       int s1=0,s2=0;
       for(int i=0;i<j;i++)
       {
              if(i==0 || i%2==0)
              s1+=ans[i];
              else
              s2+=ans[i];
       }
       return s1==s2;
    }
}