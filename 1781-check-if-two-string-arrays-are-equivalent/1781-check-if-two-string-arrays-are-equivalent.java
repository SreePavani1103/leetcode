class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        String c1="";
        String c2="";
        for(int i=0;i<word1.length;i++)
        {
            c1+=word1[i];
        }
          for(int i=0;i<word2.length;i++)
        {
            c2+=word2[i];
        }
        return c1.equals(c2);
    }
}