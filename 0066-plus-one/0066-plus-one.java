class Solution {
    public int[] plusOne(int[] digits) {
        int n=digits.length;
      StringBuilder s=new StringBuilder();
      for(int k:digits)
      {
        s.append(k);
      }
       StringBuilder r=new StringBuilder();
       int c=1;
       for(int i=s.length()-1;i>=0;i--)
       {
            int d=s.charAt(i)-'0';
            int sum=d+c;
            r.append(sum%10);
            c=sum/10;
       }
       if(c>0)
       r.append(c);
       r.reverse();
       int []a=new int[r.length()];
       for(int i=0;i<r.length();i++)
       {
        a[i]=r.charAt(i)-'0';
       }
       return a;
    }
}