class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder s= new StringBuilder();
        int n1=word1.length();
        int n2=word2.length();
        int i=0;
        int j=0;
        while(i<n1 || j<n2)
        {
            if(i<n1)
            {
            s.append(word1.charAt(i));
            i++;
            }
            if(j<n2)
            {
                s.append(word2.charAt(j));
                j++;
            }
        }
        return s.toString();
    }
}