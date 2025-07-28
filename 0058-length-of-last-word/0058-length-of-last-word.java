class Solution {
    public int lengthOfLastWord(String s) {
        char []ch=s.toCharArray();
        int r=s.length()-1;
        int l=0;
        while(l<r)
        {
            char temp=ch[l];
            ch[l]=ch[r];
            ch[r]=temp;
            l++;
            r--;
        }
        String s2=new String(ch);
        int n=s2.length();
        int c=0;
        int i=0;
        while(i<n && s2.charAt(i)==' ')
        {
            i++;
        }
       while(i<n && s2.charAt(i)!=' ')
       {
        c++;
             i++;
       }
        return c;
    }
}