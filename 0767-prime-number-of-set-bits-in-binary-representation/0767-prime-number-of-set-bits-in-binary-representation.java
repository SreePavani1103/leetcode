
class Solution {
    int bits(int n)
{
    String s=Integer.toBinaryString(n);
     int k=s.length();
    char []ch= s.toCharArray();
    int c=0;
      for(int i=0;i<k;i++)
      {
         if(ch[i]=='1')
         c++;
      }
      if(c<=1)
      return 0;
      for(int i=2;i<=Math.sqrt(c);i++)
      {     
             if(c%i==0)
             return 0;
      }
      return 1;
}
    public int countPrimeSetBits(int left, int right) {
        int l=0;
        for(int i=left;i<=right;i++)
        {
              if(bits(i)==1)
              l++;
        }
        return l;
    }
}