class Solution {
    String fun(String s)
    {
        int j=0;
        int n=s.length();
        String s2="";
        while(j<n && s.charAt(j)!='@')
        {
             s2+=s.charAt(j);
             j++;
        }
        String s3="";
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='@')
            {
                s3=s.substring(i);
                break;
            }
        }
        String s4="";
        int l=s2.indexOf('+');
        if(l!=-1){
         s4=s2.substring(0,l);
        }
        else{
        s4=s2;
        }
     String s5="";
     for(int i=0;i<s4.length();i++)
     {
        if(s4.charAt(i)=='.')
        continue;
        else
        s5+=s4.charAt(i);
     }
     return s5+s3;
    }
    public int numUniqueEmails(String[] emails) {
        String []s=new String[emails.length];
        int k=0;
        for(int i=0;i<emails.length;i++)
        {
            s[k++]=fun(emails[i]);
        }
       HashSet<String>set=new HashSet<>();
       for(String e:s)
       {
             set.add(e);
       }
       return set.size();
    }
}