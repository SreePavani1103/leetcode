class Solution {
    void reverse(char[] k,int l,int r)
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
    public String reverseStr(String s, int k) {
        char [] ch=s.toCharArray();
        int n=ch.length;
        int j=0;
        for(int i=0;i<n;i+=2*k)
        {
          int m=Math.min(i+k-1,n-1);
          reverse(ch,i,m);
        }
        return new String(ch);
    }
}