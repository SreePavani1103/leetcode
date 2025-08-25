class Solution {
    int palin(String m)
    {
        int l=0;
        int r=m.length()-1;
       String s1=m;
       char []s=m.toCharArray();
       while(l<r)
       {
        char temp=s[l];
        s[l]=s[r];
        s[r]=s[l];
        l++;
        r--;
       }
       String s2=new String(s);
       if(s1.equals(s2))
       return 1;
       else
       return 0;
    }
    public String firstPalindrome(String[] words) {
        String s="";
        for(int i=0;i<words.length;i++)
        {
            if(palin(words[i])==1)
            {
                s=words[i];
                break;
            }
        }
        return s;
    }
}