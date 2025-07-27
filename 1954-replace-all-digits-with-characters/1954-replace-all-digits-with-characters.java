class Solution {
    public String replaceDigits(String s) {
        char [] ch=s.toCharArray();
        int n=ch.length;
        for(int i=0;i<n;i++)
        {
            if(ch[i]>='0' && ch[i]<='9')
            {
                int k=ch[i]-'0';
                ch[i]=(char)(ch[i-1]+k);
            }
        }
        return new String(ch);
    }
}