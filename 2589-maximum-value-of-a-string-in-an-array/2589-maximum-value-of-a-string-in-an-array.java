class Solution {
    int size(String s)
    {
        int n=s.length();
        int k=0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)>='a' && s.charAt(i)<='z')
            {
               return n;
            }
        }
        k=Integer.parseInt(s);
        return k;
    }
    public int maximumValue(String[] strs) {
           int n=strs.length;
           int []a=new int[n];
           int k=0;
           for(int i=0;i<n;i++)
           {
               a[k++]=size(strs[i]);
           } 
           int l=a[0];
           for(int i=0;i<k;i++)
           {
             l=Math.max(l,a[i]);
           }  
           return l;
    }
}