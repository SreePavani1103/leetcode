class Solution {
     String reverse(String s)
   {
      int n=s.length();
      int l=0;
      int r=n-1;
      char []ch=s.toCharArray();
      while(l<r)
      {
          char temp=ch[l];
          ch[l]=ch[r];
          ch[r]=temp;
          l++;
          r--;
      }
        return new String(ch);
   }
    public int reverseBits(int n) {
        String s=String.format("%32s",Integer.toBinaryString(n)).replace(' ','0');
        String s2=reverse(s);
        int k=(int)Long.parseLong(s2,2);
        return k;
    }
}