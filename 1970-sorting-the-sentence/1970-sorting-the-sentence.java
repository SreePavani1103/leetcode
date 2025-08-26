class Solution {
    public String sortSentence(String s) {
        String []s2=s.split(" ");
        int []a=new int[s2.length];
        int k=0;
        for(int i=0;i<s2.length;i++)
        {
           char ch=s2[i].charAt(s2[i].length()-1);
            if(ch>='0' && ch<='9')
            {
                 a[k++]=ch-'0';
            }
         }
        String s3="";
        Arrays.sort(a);
          for(int i=0;i<k;i++)
          {
            for(int j=0;j<s2.length;j++)
            {
                int ch=s2[j].charAt(s2[j].length()-1)-'0';
                if(a[i]==ch)
                {
                    s3+=s2[j]+" ";
                    break;
                }
            }
          }
          String res=s3.replaceAll("[0-9]","");
          return res.trim();
    }
}