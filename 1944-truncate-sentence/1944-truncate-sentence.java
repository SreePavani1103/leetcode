class Solution {
    public String truncateSentence(String s, int k) {
       int n=s.length();
       StringBuilder ss=new  StringBuilder();
       int c=0;
       for(int i=0;i<n;i++)
       {
           if(s.charAt(i)==' '){
            c++;
           if(c==k)
            break;
           }
           ss.append(s.charAt(i));
       } 
       return ss.toString();

    }
}