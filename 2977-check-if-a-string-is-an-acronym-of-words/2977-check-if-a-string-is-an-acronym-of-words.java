class Solution {
    public boolean isAcronym(List<String> words, String s) {
        StringBuilder m=new StringBuilder();
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            m.append(words.get(i).charAt(0));
        }
        return s.equals(m.toString());
    }
}