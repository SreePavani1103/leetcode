class Solution {
    int count(String s)
    {
        String m="";
        if(s.charAt(10)=='F' || s.charAt(10)=='M' || s.charAt(10)=='O')
        {
        m+=s.charAt(11);
        m+=s.charAt(12);
        }
        int k=Integer.parseInt(m);
        return k;
   }
    public int countSeniors(String[] details) {
        int c=0;
        for(int i=0;i<details.length;i++)
        {
             int l=count(details[i]);
             if(l>60)
             c++;
        }
        return c;
    }
}