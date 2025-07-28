class Solution {
    public int strStr(String haystack, String needle) {
        if(!haystack.contains(needle))
        return -1;
        else 
        {
            int n=haystack.indexOf(needle);
            return n;
        }
    }
}