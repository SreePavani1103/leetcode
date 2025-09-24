class Solution {
    public String reverseWords(String s) {
        String []s1=s.trim().split("\\s+");
        String []s2=new String[s1.length];
        int j=0;
        for(int i=s1.length-1;i>=0;i--)
        {
            s2[j++]=s1[i];
        }
        String res=String.join(" ",s2);
        return res;
    }
}