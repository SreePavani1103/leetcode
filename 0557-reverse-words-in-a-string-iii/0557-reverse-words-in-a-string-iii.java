class Solution {
    void reverse(char []k,int l,int r)
    {
        while(l<r)
        {
            char temp=k[l];
            k[l]=k[r];
            k[r]=temp;
            l++;
            r--;
        }
    }
    public String reverseWords(String s) {
       char [] ch= s.toCharArray();
       int k=0;
       int n=ch.length;
       for(int i=0;i<=n;i++)
       {
          if( i==n || ch[i]==' ')
          {
          reverse(ch,k,i-1);
          k=i+1;
          }
       } 
       return new String(ch); 
    }
}