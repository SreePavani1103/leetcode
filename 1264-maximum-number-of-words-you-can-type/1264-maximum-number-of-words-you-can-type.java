class Solution {
    int cont(String s,String s2)
    {
       for(int i=0;i<s2.length();i++){
        if(s.indexOf(s2.charAt(i))!=-1)
         return 1;
       }
        return 0;
    }
    public int canBeTypedWords(String text, String brokenLetters) {
        String []s=text.split(" ");
        int c=0;
        int n=s.length;
        for(int i=0;i<n;i++)
        {
            if(cont(s[i],brokenLetters)==0)
            c++;
        }
        return c;
    }
}