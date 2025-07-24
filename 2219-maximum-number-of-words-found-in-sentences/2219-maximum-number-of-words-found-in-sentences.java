class Solution {
     int count(String s)
     {
        int k=s.length();
        int c=0;
        for(int i=0;i<k;i++)
        {
            if(s.charAt(i)==' ')
            c++;
        }
        return c+1;
     }
    public int mostWordsFound(String[] sentences) {
        int max=0;
        for(int i=0;i<sentences.length;i++)
        {
               max=Math.max(max,count(sentences[i]));
        }
        return max;
    }
}